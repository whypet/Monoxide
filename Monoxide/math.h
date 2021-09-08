#pragma once
#include "monoxide.h"

#define PI 3.141592f

VOID
SeedXorshift32(
	_In_ DWORD dwSeed
);

DWORD
Xorshift32( VOID );

VOID
Reflect2D(
	_Inout_ PINT x,
	_Inout_ PINT y,
	_In_ INT w,
	_In_ INT h
);

VOID
InitializeSine( VOID );

FLOAT
FastSine(
	_In_ FLOAT f
);

FLOAT
FastCosine(
	_In_ FLOAT f
);