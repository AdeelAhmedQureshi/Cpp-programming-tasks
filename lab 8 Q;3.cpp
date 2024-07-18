// Author = Adeel.Ahmed.Q
// Program =
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

struct Employee
{
	string num, name;
	double b_salary, h_allowance, m_allowance, tax, g_salary, net_salary;
	
};
void empSalary(Employee *emp);
void disPlay(Employee);
int main ()
{
	Employee emp;
	Employee *ptr;
	ptr= & emp;
	cout<<"Enter the Employee number: ";
	getline(cin,emp.num);
	cout<<"Enter the Employee name: ";
	getline(cin,emp.name);
	cout<<"Enter the Basic Salary: ";
	cin>>emp.b_salary;
	// send the structure pointer ptr variable  to empSalary function and save ptr in emp;
	empSalary(ptr);
	// know call display function after calculated salary function.
	disPlay(emp);
	
system ("PAUSE");
return 0;
}

void empSalary(Employee *emp)
{
	emp->h_allowance=(0.1* emp->b_salary); 
	emp->m_allowance=(0.05* emp->b_salary);
	emp->tax=(0.04* emp->b_salary);
	emp->g_salary=((emp->b_salary) + (emp->h_allowance) + (emp->m_allowance));
	emp->net_salary=((emp->g_salary) - (emp->tax));
}
void disPlay(Employee emp)
{
	cout<<"\n************************************************\n";
	cout<<"		EMPLOYEE SALARY DETAILS";
	cout<<"\n************************************************\n";
	cout<<"Employee number: "<<emp.num<<endl;
	cout<<"Employee name: "<<emp.name<<endl;
	cout<<"Basic Salary: "<<emp.b_salary<<endl;
	cout<<"House Allowance: "<<emp.h_allowance<<endl;
	cout<<"Medical Allowance: "<<emp.m_allowance<<endl;
	cout<<"Gross Salary: "<<emp.g_salary<<endl;
	cout<<"Tax Deduction: "<<emp.tax<<endl;
	cout<<"Net Salary: "<<emp.net_salary<<endl;
}

