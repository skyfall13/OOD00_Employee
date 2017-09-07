#include<iostream>
#include<iomanip>
#include<cstring>
#include "SalariedEmployee.h"

using namespace std;

SalariedEmployee::SalariedEmployee(int empId, char* name, char* address, int salary) : Employee(empId, name, address), salary(salary) 
{}

//
//void SalariedEmployee::SalariedEmployeeCalculator(char empId, char name, char address)
//{
//	cout << "ºÀ±Þ: " << salary << endl;
//}

void SalariedEmployee::Print()
{
	Employee::Print();
	cout << "ºÀ±Þ: " << salary << endl;
}