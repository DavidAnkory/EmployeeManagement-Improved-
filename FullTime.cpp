/*
David Ankory 206780066
Workshop in C ++
Exercise 6 Question 1
The cpp file Includes all the codes of the functions
*/
#include "FullTime.h"

void FullTime::salary()//Calculates the salary
{
	pay=(annual_salary / 12);
}

ostream& operator<<(ostream& out, const FullTime& worker)//print the data
{
	out << endl;
	Employee temp = worker;//copy the data in to temperry integer
	out << temp;
	out << "Salary per Month :" << worker.pay << endl;//print pay per monthe
	return out;
}

istream& operator>>(istream& in,  FullTime& worker)////get in the data
{
	Employee* temp = &worker;//temp Employee how point to the refernce worker
	in >> *temp;//get in the value
	in >> worker.annual_salary;//the annul_salary separately

	if (worker.annual_salary < 0 || worker.id < 0 || worker.seniority < 0)//Checks for logical problems
	{
		throw "ERROR\n";
	}
	worker.salary();//Updating the pay
	return in;
}

