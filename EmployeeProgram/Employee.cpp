/*201204441 김수현 상위 Employee 파일 구현*/

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
	cout << "사원번호: " << empId << endl;
	cout << "사원이름: " << name << endl;
	cout << "주소: " << address << endl;
}