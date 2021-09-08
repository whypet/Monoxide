#include "monoxide.h"

BOOL
CALLBACK
MonitorEnumProc(
    _In_ HMONITOR hMonitor,
    _In_ HDC hDC,
    _In_ PRECT prcArea,
    _In_ LPARAM lParam
)
{
    UNREFERENCED_PARAMETER( hMonitor );
    UNREFERENCED_PARAMETER( hDC );
    UNREFERENCED_PARAMETER( lParam );

    rcScrBounds.left = min( rcScrBounds.left, prcArea->left );
    rcScrBounds.top = min( rcScrBounds.top, prcArea->top );
    rcScrBounds.right = max( rcScrBounds.right, prcArea->right );
    rcScrBounds.bottom = max( rcScrBounds.bottom, prcArea->bottom );

    return TRUE;
}
    
LRESULT
CALLBACK
NoDestroyWndProc(
    _In_ HWND hWnd,
    _In_ DWORD dwMsg,
    _In_ WPARAM wParam,
    _In_ LPARAM lParam
)
{
    switch ( dwMsg )
    {
    default:
        return DefWindowProcW( hWnd, dwMsg, wParam, lParam );
    case WM_DESTROY:
    case WM_CLOSE:
    case WM_QUIT:
        return CALLBACK_NULL;
    }
}

VOID
CALLBACK
TimerProc(
    _In_ HWND hWnd,
    _In_ UINT nMsg,
    _In_ UINT nIDEvent,
    _In_ DWORD dwTime
)
{
    UNREFERENCED_PARAMETER( hWnd );
    UNREFERENCED_PARAMETER( nMsg );
    UNREFERENCED_PARAMETER( nIDEvent );
    UNREFERENCED_PARAMETER( dwTime );

    nCounter++;
}