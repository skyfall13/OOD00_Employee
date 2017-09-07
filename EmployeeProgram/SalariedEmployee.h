/*전반적인 Employee프로그램의 헤더 구성*/
#ifndef __SALARIEDEMPLOYEE_H_ 
#define __SALARIEDEMPLOYEE_H_

class Employee
{
private:
	int empId;
	char* name;
	char* address;

public:
	Employee(int _empId, char* _name, char* _address){}
	void EmployeePrint();
};

class HourlyEmployee : public Employee 
{
public:
	void hourRate();
 };

class SalariedEmployee : public Employee {
private:
	float salary;

public:
	SalariedEmployee(int empId, char* name, char* address, float salary) : Employee(empId, name, address), salary(salary) {};
	void SalariedEmployeeCalculator(char empId, char name,char address):salary(salary);
};

class CommissionedEmployee : public Employee {
public:
	void salaryRate();
	void commRate();
};

#endif


