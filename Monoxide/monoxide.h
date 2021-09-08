#pragma once
#pragma warning( disable: 4152 )
#pragma warning( disable: 4201 )

#define RGBQUAD _RGBQUAD
#pragma warning( push, 0 )
#include <windows.h>
#pragma warning( pop )
#undef RGBQUAD

#include <accctrl.h>
#include <aclapi.h>
#include <stdio.h>
#include <math.h>
#include "def.h"
#include "math.h"
#include "color.h"
#include "callbacks.h"
#include "threads.h"
#include "payloads.h"
#include "extra_payloads.h"
#include "destruction.h"

#pragma region Public Variables
extern HWND hwndDesktop;
extern HDC hdcDesktop;
extern RECT rcScrBounds;
extern HHOOK hMsgHook;
extern INT nCounter;
#pragma endregion Public Variables