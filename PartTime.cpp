/*
David Ankory 206780066
Workshop in C ++
Exercise 6 Question 1
The cpp file Includes all the codes of the functions
*/
#include "PartTime.h"


void PartTime::salary()//Calculates the salary
{
	pay=hours * salary_by_hour;
}

istream& operator>>(istream& in ,  PartTime& worker)
{
	Employee* temp = &worker;//temp Employee how point to the refernce worker
	in >> *temp;//get the value
	in >> worker.hours >> worker.salary_by_hour;//the hours and the pay depending on the hoursseparately
	if (worker.hours < 0 || worker.id < 0 || worker.salary_by_hour < 0 || worker.seniority < 0)//Checks for logical problems
	{
		throw "ERROR\n";
	}
	worker.salary();//Updating the pay
	return in;
}

ostream& operator<<(ostream& out, const PartTime& worker)
{
	out << endl;
	Employee temp = worker;//copy the data in to temperry integer
	out << temp;//print the data
	out << "Hours: " << worker.hours << endl;//print the hours the employee do
	out << "Salary per Month: " << worker.pay<< endl;//peint he pay per monthe
	return out;
}

