/*
David Ankory 206780066
Workshop in C ++
Exercise 6 Question 1
The h file includes the names of the functions and their definition
*/
#include <iostream>
#include <string>
using namespace std;
#pragma once
class Employee
{
protected:
	string name;
	int id;
	int	seniority;
	float pay;
public:
	Employee(string _name, int _id, int _seniority);//get in the value
	float salaryAfterBonus();//Calculates the bonus according to the employee's seniority
	friend ostream& operator<<(ostream& out,const Employee& worker);//print the data on the employee
	friend istream& operator>>(istream& in, Employee& worker);// cin the value
};
