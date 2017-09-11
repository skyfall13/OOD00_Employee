/*201204441 김수현 상위 Main 파일 구현*/

#include<iostream>
#include<iomanip>
#include<string>
#include "SalariedEmployee.h"

using namespace std;

void usage(string cmd) 
{
	cout << "usage:" << cmd << " <EmpId> <name> <address> S|H|C" << "<salary|hourlyRate> [commisionRate]" << endl;
	exit(0);
}

int main(int argc, char* argv[]) 
{
	int empId = 0;
	char* name;
	char* address;
	char* emtype;
	int salaryhourlyRate = 0;
	float commissionRate = 0;
	int sales = 0; // 판매액

	if (argc < 6) 
	{
		usage(argv[0]);
	}
		

	empId = atoi(argv[1]);
	name = argv[2];
	address = argv[3];
	emtype = argv[4];
	salaryhourlyRate = atoi(argv[5]);

	/*commissionRate & sales (수수료 부분, 판매액 부분에 대한 초기화)*/
	if (commissionRate == 0)
	{
		commissionRate = 0;
	}
	else {
		commissionRate = atof(argv[6]);
	}
	if (sales == 0) 
	{
		sales = 0;
	}else {
		sales = atof(argv[7]);
	}

	switch (*emtype)
	{
	case 'S':
	case 's':
		cout << "AddEmp" << " ";
		for (int i = 1; i < 6; i++) {
			cout << argv[i] << " ";
			if (i == 5) {
				cout << endl;
			}
		}
		SalariedEmployee *se;
		se = new SalariedEmployee(empId, name, address, salaryhourlyRate);
		se->Print();
		break;
	
	case 'H':
	case 'h':
		cout << "AddEmp" << " ";
		for (int i = 1; i < 6; i++) {
			cout << argv[i] << " ";
			if (i == 5) {
				cout << endl;
			}
		}
		HourlyEmployee* he;
		he = new HourlyEmployee(empId, name, address, salaryhourlyRate);
		he->Print();
		break;
	
	case 'C':
	case 'c':
		cout << "AddEmp" << " ";
		for (int i = 1; i < 8; i++) {
			cout << argv[i] << " ";
			if (i == 7) {
				cout << endl;
			}
		}
		CommissionedEmployee *ce;
		ce = new CommissionedEmployee(empId, name, address, salaryhourlyRate, commissionRate, sales);
		ce->Print();
		break;
	default:
		cout << "잘못 입력하셨습니다." << endl;
		break;
	}
}
