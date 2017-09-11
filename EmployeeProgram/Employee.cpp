/*201204441 ����� ���� Employee ���� ����*/

#include<iostream>
#include<iomanip>
#include<cstring>
#include "SalariedEmployee.h"

using namespace std;
Employee::Employee(int _empId, char* _name, char* _address) : empId(_empId) {
	name = new char[sizeof(_name) + 1];
	address = new char[sizeof(_address) + 1];
	strcpy(name, _name);
	strcpy(address, _address);
}

void Employee::Print() 
{
	cout << "�����ȣ: " << empId << endl;
	cout << "����̸�: " << name << endl;
	cout << "�ּ�: " << address << endl;
}