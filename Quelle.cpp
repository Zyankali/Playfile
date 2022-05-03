#include <iostream>
#include <windows.h>
// costume Headers
#include "Startup.h"

using namespace std;

void ClearScreen();

int main() 
{

	Startup upstarter;

	upstarter.upstart();

	Sleep(2000);

	ClearScreen();

	/*
	string str = "Hello!";
	cout << str;
	cout << string(str.length(), '\b');
	cout << "Hello again!";
	*/

	cout << "######################################################" << endl;
	cout << "#                                                    #" << endl;
	cout << "#                      Playfile                      #" << endl;
	cout << "#                                                    #" << endl;
	cout << "#                     created by                     #" << endl;
	cout << "#                      Zyankali                      #" << endl;
	cout << "#                                                    #" << endl;
	cout << "#                                                    #" << endl;
	cout << "#                      (c) 2022                      #" << endl;
	cout << "#                                                    #" << endl;
	cout << "######################################################" << endl;


	return 0;
}

void ClearScreen()
{
	HANDLE                     hStdOut;
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	DWORD                      count;
	DWORD                      cellCount;
	COORD                      homeCoords = { 0, 0 };

	hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	if (hStdOut == INVALID_HANDLE_VALUE) return;

	/* Get the number of cells in the current buffer */
	if (!GetConsoleScreenBufferInfo(hStdOut, &csbi)) return;
	cellCount = csbi.dwSize.X * csbi.dwSize.Y;

	/* Fill the entire buffer with spaces */
	if (!FillConsoleOutputCharacter(
		hStdOut,
		(TCHAR)' ',
		cellCount,
		homeCoords,
		&count
	)) return;

	/* Fill the entire buffer with the current colors and attributes */
	if (!FillConsoleOutputAttribute(
		hStdOut,
		csbi.wAttributes,
		cellCount,
		homeCoords,
		&count
	)) return;

	/* Move the cursor home */
	SetConsoleCursorPosition(hStdOut, homeCoords);
}