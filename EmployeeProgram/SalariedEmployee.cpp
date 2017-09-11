#include<iostream>
#include<iomanip>
#include<cstring>
#include "SalariedEmployee.h"

using namespace std;

SalariedEmployee::SalariedEmployee(int empId, char* name, char* address, int _salary) : Employee(empId, name, address), salary(_salary) 
{}

void SalariedEmployee::Print()
{
	Employee::Print();
	cout << "ºÀ±Þ: " << salary << endl;
}