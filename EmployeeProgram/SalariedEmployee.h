/*�������� Employee���α׷��� ��� ����*/
#ifndef __SALARIEDEMPLOYEE_H_ 
#define __SALARIEDEMPLOYEE_H_

//���� Ŭ���� 

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


// �ð��� ���� Ŭ����
class HourlyEmployee : public Employee 
{
private:
	int hourlyRate;
	int hour = 8;		// ���� 9��~ ���� 6�� ����
	float totalSalary;

public:
	void hourRate();
 };

// ������ ���� Ŭ����
class SalariedEmployee : public Employee 
{
private:
	float salary;

public:
	SalariedEmployee(int empId, char* name, char* address, int salary);
	void SalariedEmployeeCalculator(char empId, char name,char address);
	void Print();
};

// �Ǹ� ������ ����
class CommissionedEmployee : public Employee 
{
private:
	float commissionRate; //������
	float sales; // �Ǹž�
	float totalSalary; // �ѿ���

public:
	void salaryRate();
	void commRate();
};

#endif


