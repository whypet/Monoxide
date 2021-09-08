#include "monoxide.h"

HSLCOLOR
RGBToHSL(
	_In_ RGBQUAD rgb
)
{
	HSLCOLOR hsl;

	BYTE r = rgb.r;
	BYTE g = rgb.g;
	BYTE b = rgb.b;

	FLOAT _r = ( FLOAT )r / 255.f;
	FLOAT _g = ( FLOAT )g / 255.f;
	FLOAT _b = ( FLOAT )b / 255.f;

	FLOAT rgbMin = min( min( _r, _g ), _b );
	FLOAT rgbMax = max( max( _r, _g ), _b );

	FLOAT fDelta = rgbMax - rgbMin;
	FLOAT deltaR;
	FLOAT deltaG;
	FLOAT deltaB;

	FLOAT h = 0.f;
	FLOAT s = 0.f;
	FLOAT l = ( FLOAT )( ( rgbMax + rgbMin ) / 2.f );

	if ( fDelta != 0.f )
	{
		s = l < .5f ? ( FLOAT )( fDelta / ( rgbMax + rgbMin ) ) : ( FLOAT )( fDelta / ( 2.f - rgbMax - rgbMin ) );
		deltaR = ( FLOAT )( ( ( rgbMax - _r ) / 6.f + ( fDelta / 2.f ) ) / fDelta );
		deltaG = ( FLOAT )( ( ( rgbMax - _g ) / 6.f + ( fDelta / 2.f ) ) / fDelta );
		deltaB = ( FLOAT )( ( ( rgbMax - _b ) / 6.f + ( fDelta / 2.f ) ) / fDelta );

		if ( _r == rgbMax )
		{
			h = deltaB - deltaG;
		}
		else if ( _g == rgbMax )
		{
			h = ( 1.f / 3.f ) + deltaR - deltaB;
		}
		else if ( _b == rgbMax )
		{
			h = ( 2.f / 3.f ) + deltaG - deltaR;
		}

		if ( h < 0.f )
		{
			h += 1.f;
		}
		if ( h > 1.f )
		{
			h -= 1.f;
		}
	}

	hsl.h = h;
	hsl.s = s;
	hsl.l = l;
	return hsl;
}

RGBQUAD
HSLToRGB(
	_In_ HSLCOLOR hsl
)
{
	RGBQUAD rgb;

	FLOAT r = hsl.l;
	FLOAT g = hsl.l;
	FLOAT b = hsl.l;

	FLOAT h = hsl.h;
	FLOAT sl = hsl.s;
	FLOAT l = hsl.l;
	FLOAT v = ( l <= .5f ) ? ( l * ( 1.f + sl ) ) : ( l + sl - l * sl );

	FLOAT m;
	FLOAT sv;
	FLOAT fract;
	FLOAT vsf;
	FLOAT mid1;
	FLOAT mid2;

	INT sextant;

	if ( v > 0.f )
	{
		m = l + l - v;
		sv = ( v - m ) / v;
		h *= 6.f;
		sextant = ( INT )h;
		fract = h - sextant;
		vsf = v * sv * fract;
		mid1 = m + vsf;
		mid2 = v - vsf;

		switch ( sextant )
		{
		case 0:
			r = v;
			g = mid1;
			b = m;
			break;
		case 1:
			r = mid2;
			g = v;
			b = m;
			break;
		case 2:
			r = m;
			g = v;
			b = mid1;
			break;
		case 3:
			r = m;
			g = mid2;
			b = v;
			break;
		case 4:
			r = mid1;
			g = m;
			b = v;
			break;
		case 5:
			r = v;
			g = m;
			b = mid2;
			break;
		}
	}

	rgb.r = ( BYTE )( r * 255.f );
	rgb.g = ( BYTE )( g * 255.f );
	rgb.b = ( BYTE )( b * 255.f );

	return rgb;
}