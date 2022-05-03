#include <iostream>
#include <windows.h>
// costume Headers
#include "Startup.h"

using namespace std;

void Startup::upstart()
{

	cout << "Initialising system startup sequence!" << "\t\r" << flush;
	Sleep(2000);
	cout << "                                       " << "\t\r" << flush;

	int i;
	for (i = 0; i < 50000; i++)
	{
		cout << "[.   ] Checking BIOS OS.   " << "\t\r" << flush;
		cout << "[..  ] Checking BIOS OS..  " << "\t\r" << flush;
		cout << "[... ] Checking BIOS OS... " << "\t\r" << flush;
		cout << "[....] Checking BIOS OS...." << "\t\r" << flush;
	}

	cout << "[ OK ] Checking BIOS OS                    " << "\t\n";

	for (i = 0; i < 10000; i++)
	{
		cout << "[.   ] Snchronization System Time.   " << "\t\r" << flush;
		cout << "[..  ] Snchronization System Time..  " << "\t\r" << flush;
		cout << "[... ] Snchronization System Time... " << "\t\r" << flush;
		cout << "[....] Snchronization System Time...." << "\t\r" << flush;
	}

	cout << "[ OK ] Snchronization System Time                " << "\t\n";

	for (i = 0; i < 10000; i++)
	{
		cout << "[.   ] OS KERNEL Startup.   " << "\t\r" << flush;
		cout << "[..  ] OS KERNEL Startup..  " << "\t\r" << flush;
		cout << "[... ] OS KERNEL Startup... " << "\t\r" << flush;
		cout << "[....] OS KERNEL Startup...." << "\t\r" << flush;
	}

	cout << "[ OK ] OS KERNEL Startup                " << "\t\n";

	for (i = 0; i < 30000; i++)
	{
		cout << "[.   ] Summon daemon.   " << "\t\r" << flush;
		cout << "[..  ] Summon daemon..  " << "\t\r" << flush;
		cout << "[... ] Summon daemon... " << "\t\r" << flush;
		cout << "[....] Summon daemon...." << "\t\r" << flush;
	}

	cout << "[ 666] Summon daemon                " << "\t\r" << flush;
	Sleep(1000);
	cout << "[ OK ] Summon daemon                " << "\t\n";

}