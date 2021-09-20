/*
David Ankory 206780066
Workshop in C ++
Exercise 6 Question 1
The h file includes the names of the functions and their definition
*/
#include "Employee.h"
using namespace std;
#pragma once
class PartTime : public Employee
{
	int hours;
	float salary_by_hour;
public:
	//get the value in the data worker do to the Employee class
	PartTime(string name, int id, int seniority, int _hours, int _salary_by_hour) :Employee(name, id, seniority), hours(_hours), salary_by_hour(_salary_by_hour) {}
	//get defult value in to the data
	PartTime() : Employee("\0", 0, 0), hours(0), salary_by_hour(0){}
	//Calculates the salary
	void salary();
	//print the data
	friend istream& operator>>(istream& in,  PartTime& worker);
	//get in the data
	friend ostream& operator<<(ostream& out,const PartTime& worker);
	

};

