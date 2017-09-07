/*전반적인 Employee프로그램의 헤더 구성*/
#ifndef __SALARIEDEMPLOYEE_H_ 
#define __SALARIEDEMPLOYEE_H_

//직원 클래스 

class Employee 
{
private:
	int empId;
	char* name;
	char* address;

public:
	Employee(int _empId, char* _name, char* _address);
	void Print();
};


// 시간제 직원 클래스
class HourlyEmployee : public Employee 
{
private:
	int hourlyRate;
	int hour = 8;		// 오전 9시~ 저녁 6시 기준
	float totalSalary;

public:
	void hourRate();
 };

// 월급제 직원 클래스
class SalariedEmployee : public Employee 
{
private:
	float salary;

public:
	SalariedEmployee(int empId, char* name, char* address, int salary);
	void SalariedEmployeeCalculator(char empId, char name,char address);
	void Print();
};

// 판매 수수료 직원
class CommissionedEmployee : public Employee 
{
private:
	float commissionRate; //수수료
	float sales; // 판매액
	float totalSalary; // 총월급

public:
	void salaryRate();
	void commRate();
};

#endif


