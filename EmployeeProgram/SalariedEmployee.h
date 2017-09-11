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

public:
	HourlyEmployee(int empId, char* name, char* address, int hourlyRate);
	int hourRateCalc(int hourlyRate, int hour);
	void Print();
 };

// ������ ���� Ŭ����
class SalariedEmployee : public Employee 
{
private:
	float salary;

public:
	SalariedEmployee(int empId, char* name, char* address, int _salary);
	void Print();
};

// �Ǹ� ������ ����
class CommissionedEmployee : public Employee 
{
private:
	float commissionRate; //������
	int salaryRate; //����
	float sales; // �Ǹž�
	float totalSalary; // �ѿ���

public:
	CommissionedEmployee(int empId, char* name, char* address, int _salaryRate, float _commissionRate, int _sales);
	float salaryRateCalc();
	//float salaryRateCalc(int salaryRate, float commissionRate, int sales);
	void Print();
};

#endif


