#pragma once
#include "monoxide.h"

BOOL
CALLBACK
MonitorEnumProc(
    _In_ HMONITOR hMonitor,
    _In_ HDC hDC,
    _In_ PRECT prcArea,
    _In_ LPARAM lParam
);

LRESULT
CALLBACK
NoDestroyWndProc(
    _In_ HWND hWnd,
    _In_ DWORD dwMsg,
    _In_ WPARAM wParam,
    _In_ LPARAM lParam
);

VOID
CALLBACK
TimerProc(
    _In_ HWND hWnd,
    _In_ UINT nMsg,
    _In_ UINT nIDEvent,
    _In_ DWORD dwTime
);