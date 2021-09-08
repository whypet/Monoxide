#include "monoxide.h"

VOID
WINAPI
TimerThread(
	VOID
)
{
	SetTimer( NULL, 0, TIMER_DELAY, ( TIMERPROC )TimerProc );

	MSG msg;
	while ( GetMessageW( &msg, NULL, 0, 0 ) )
	{
		TranslateMessage( &msg );
		DispatchMessageW( &msg );
	}
}