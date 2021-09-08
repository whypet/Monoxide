#include "monoxide.h"

DWORD xs;
static FLOAT pfSinVals[ 4096 ];

VOID
SeedXorshift32(
	_In_ DWORD dwSeed
)
{
	xs = dwSeed;
}

DWORD
Xorshift32( VOID )
{
	xs ^= xs << 13;
	xs ^= xs >> 17;
	xs ^= xs << 5;
	return xs;
}

VOID
Reflect2D(
	_Inout_ PINT x,
	_Inout_ PINT y,
	_In_ INT w,
	_In_ INT h
)
{
#define FUNCTION(v, maxv) ( abs( v ) / ( maxv ) % 2 ? ( maxv ) - abs( v ) % ( maxv ) : abs( v ) % ( maxv ) );
	*x = FUNCTION( *x, w - 1 );
	*y = FUNCTION( *y, h - 1 );
#undef FUNCTION
}

FLOAT
FastSine(
	_In_ FLOAT f
)
{
	INT i = ( INT )( f / ( 2.f * PI ) * ( FLOAT )_countof( pfSinVals ) );
	return pfSinVals[ i % _countof( pfSinVals ) ];
}

FLOAT
FastCosine(
	_In_ FLOAT f
)
{
	return FastSine( f + PI / 2.f );
}

VOID
InitializeSine( VOID )
{
	for ( INT i = 0; i < _countof( pfSinVals ); i++ )
		pfSinVals[ i ] = sinf( ( FLOAT )i / ( FLOAT )_countof( pfSinVals ) * PI * 2.f );
}