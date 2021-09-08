@echo off
nasm monoxide.asm -o monoxide.bin
qemu-system-x86_64 -drive file=monoxide.bin,format=raw -monitor stdio -m 256 -no-shutdown -no-reboot -accel hax -L "C:\Program Files\qemu"