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

	for (i = 0; i < 20000; i++)
	{
		cout << "[.   ] Network Device 001OIP.   " << "\t\r" << flush;
		cout << "[..  ] Network Device 001OIP..  " << "\t\r" << flush;
		cout << "[... ] Network Device 001OIP... " << "\t\r" << flush;
		cout << "[....] Network Device 001OIP...." << "\t\r" << flush;
	}

	cout << "[ OK ] Network Device 001OIP                " << "\t\n";

	for (i = 0; i < 50000; i++)
	{
		cout << "[.   ] Setting up External Devices.   " << "\t\r" << flush;
		cout << "[..  ] Setting up External Devices..  " << "\t\r" << flush;
		cout << "[... ] Setting up External Devices... " << "\t\r" << flush;
		cout << "[....] Setting up External Devices...." << "\t\r" << flush;
	}

	cout << "[ OK ] Setting up External Devices                " << "\t\n";

	for (i = 0; i < 50000; i++)
	{
		cout << "[.   ] FINAL startup and fastcheck.   " << "\t\r" << flush;
		cout << "[..  ] FINAL startup and fastcheck..  " << "\t\r" << flush;
		cout << "[... ] FINAL startup and fastcheck... " << "\t\r" << flush;
		cout << "[....] FINAL startup and fastcheck...." << "\t\r" << flush;
	}

	cout << "[ OK ] FINAL startup and fastcheck                " << "\t\n";
	sleep(2000);
	cout << "All Done! Ready to go" << "\t\n";
		cout << "[10]             " << "\t\r" << flush;
		sleep(1000);

		cout << "[09]            " << "\t\r" << flush;
		sleep(1000);
		cout << "[08]            " << "\t\r" << flush;
		sleep(1000);
		cout << "[07]            " << "\t\r" << flush;
		sleep(1000);
		cout << "[06]            " << "\t\r" << flush;
		sleep(1000);
		cout << "[05]            " << "\t\r" << flush;
		sleep(1000);
		cout << "[04]            " << "\t\r" << flush;
		sleep(1000);
		cout << "[03]            " << "\t\r" << flush;
		sleep(1000);
		cout << "[02]            " << "\t\r" << flush;
		sleep(1000);
		cout << "[01]            " << "\t\r" << flush;
		sleep(1000);
		cout << "[00] HELP! ARGL!" << "\t\r" << flush;
		sleep(200);


}