/*201204441 김수현 상위 Main 파일 구현*/

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
	char* name;
	char* address;
	char* emtype;
	int salaryhourlyRate;
	float commisionRate;

	if (argc < 6) 
	{
		usage(argv[0]);
	}

	empId = atoi(argv[2]);
	name = argv[3];
	address = argv[4];
	emtype = argv[5];
	salaryhourlyRate = atoi(argv[6]);
	
	//Employee *e;
	//e = new Employee(empId, name, address);
	
	switch (*emtype)
	{
	case 'S':
	case 's':
		Employee *se;
		se = new SalariedEmployee(empId, name, address, salaryhourlyRate);
		se->Print();
		break;
	case 'H':
	case 'h':
		//HourlyEmployee he(empId, name, address, salaryhourlyRate);
		//he.Print();
		break;
	case 'C':
	case 'c':

		break;
	default:
		break;
	}
}
