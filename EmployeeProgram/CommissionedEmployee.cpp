/*201204441 ����� ���� CommissionedEmployee ���� ����*/

#include<iostream>
#include<iomanip>
#include<cstring>
#include "SalariedEmployee.h"

using namespace std;

CommissionedEmployee::CommissionedEmployee(int empId, char* name, char* address, int _salaryRate, float _commissionRate, int _sales) :Employee(empId, name, address),commissionRate(_commissionRate),salaryRate(_salaryRate),sales(_sales)
{
	totalSalary = CommissionedEmployee::salaryRateCalc();
}

float CommissionedEmployee::salaryRateCalc() 
{
	float result = 0.0;
	result = salaryRate + (sales * commissionRate);
	return result;
}

void CommissionedEmployee::Print()
{
	Employee::Print();
	cout << "����: " << totalSalary << endl;
}