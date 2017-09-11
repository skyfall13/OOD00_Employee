#include<iostream>
#include<iomanip>
#include<cstring>
#include "SalariedEmployee.h"

using namespace std;

HourlyEmployee::HourlyEmployee(int empId, char* name, char* address, int inithourlyRate) :Employee(empId, name, address), hourlyRate(inithourlyRate)
{
	hourlyRate = HourlyEmployee::hourRateCalc(inithourlyRate, hour);	
}

int HourlyEmployee::hourRateCalc(int hourlyRate, int hour)
{
	int result;
	result = hourlyRate * hour;
	return result;
}

void HourlyEmployee::Print() 
{
	Employee::Print();
	cout << "ºÀ±Þ: "<< HourlyEmployee::hourlyRate << endl;
}