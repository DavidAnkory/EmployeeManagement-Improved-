/*
David Ankory 206780066
Workshop in C ++
Exercise 6 Question 1
The h file includes the names of the functions and their definition
*/
#include "Employee.h"
using namespace std;
#pragma once
class FullTime : public Employee
{
	float annual_salary;
public :
	//get the value in the data worker do to the Employee class
	FullTime(string name,int id,int seniority,int pay):Employee(name,id,seniority),annual_salary(pay){}
	//get defult value in to the data
	FullTime(): Employee("\0",0,0),annual_salary(0){}
	//Calculates the salary
	void salary();
	//print the data
	friend ostream& operator<<(ostream& out, const FullTime& worker);
	//get in the data
	friend istream& operator>>(istream& in, FullTime& worker);
};

