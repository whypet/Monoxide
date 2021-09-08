#pragma once
#include "monoxide.h"

typedef union
{
	COLORREF rgb;
	struct
	{
		BYTE b;
		BYTE g;
		BYTE r;
		BYTE unused;
	};
} RGBQUAD, *PRGBQUAD;

typedef VOID( WINAPI GDI_SHADER )(
	_In_ INT t,
	_In_ INT w,
	_In_ INT h,
	_In_ HDC hdcTemp,
	_In_ HBITMAP hbmTemp,
	_In_ PRGBQUAD prgbSrc,
	_Inout_ PRGBQUAD prgbDst
	), *PGDI_SHADER;

typedef VOID( WINAPI GDI_SHADER_OPERATION )(
	_In_ INT t,
	_In_ INT w,
	_In_ INT h,
	_In_ RECT rcBounds,
	_In_ HDC hdcDst,
	_In_ HDC hdcTemp
	), *PGDI_SHADER_OPERATION;

typedef struct tagGDI_SHADER_PARAMS
{
	PGDI_SHADER pGdiShader;
	PGDI_SHADER_OPERATION pPreGdiShader;
	PGDI_SHADER_OPERATION pPostGdiShader;
} GDI_SHADER_PARAMS, *PGDISHADER_PARAMS;

typedef VOID( WINAPI AUDIO_SEQUENCE )(
	_In_ INT nSamplesPerSec,
	_In_ INT nSampleCount,
	_Inout_ PSHORT psSamples
	), *PAUDIO_SEQUENCE;

typedef VOID( WINAPI AUDIOSEQUENCE_OPERATION )(
	_In_ INT nSamplesPerSec
	), *PAUDIO_SEQUENCE_OPERATION;

typedef struct tagAUDIO_SEQUENCE_PARAMS
{
	INT nSamplesPerSec;
	INT nSampleCount;
	PAUDIO_SEQUENCE pAudioSequence;
	PAUDIO_SEQUENCE_OPERATION pPreAudioOp;
	PAUDIO_SEQUENCE_OPERATION pPostAudioOp;
} AUDIO_SEQUENCE_PARAMS, *PAUDIO_SEQUENCE_PARAMS;