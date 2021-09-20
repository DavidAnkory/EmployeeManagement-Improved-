/*
David Ankory 206780066
Workshop in C ++
Exercise 6 Question 1
The cpp file Includes all the codes of the functions
*/
#include "Employee.h"

Employee::Employee(string _name, int _id, int _seniority)//get in the value
{
	name = _name;
	id = _id;
	seniority = _seniority;
	pay = 0;
}



float Employee::salaryAfterBonus()//Calculates the bonus according to the employee's seniority
{
	if (seniority <= 5)
	{
		return pay + 500;
	}
	else
	{
		return (pay)+(pay*0.25);//The employee's salary plus 25 percent of his salary
	}
}

ostream& operator<<(ostream& out, const Employee& worker) // print the data on the employee
{
	out << "Employee:" << worker.name << endl;
	out << "Employee ID:" << worker.id << endl;
	out << "Years Seniority:" << worker.seniority << endl;
	return out;
}

istream& operator>>(istream& in, Employee& worker)//// cin the value
{
	cout << "Enter employee details:" << endl;
	in >> worker.name >> worker.id >> worker.seniority;
	return in;
}
