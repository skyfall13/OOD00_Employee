/*201204441 ����� ���� Main ���� ����*/
#include<iostream>
#include<iomanip>
#include<string>
#include "SalariedEmployee.h"

using namespace std;

void usage(string cmd) 
{
	cout << "usage:" << cmd << "<EmpId> <name> <address> S|H|C" << "<salary|hourlyRate> [commisionRate]" << endl;
	exit(0);
}

int main(int argc, char* argv[]) 
{
	int empId;

	if (argc < 6) 
	{
		usage(argv[0]);
	}

	empId = atoi(argv[1]);

	switch (switch_on)
	{
	default:
		break;
	}
}
