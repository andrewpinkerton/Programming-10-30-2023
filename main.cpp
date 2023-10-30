// Name: Andrew Pinkerton
// Program Description: Multiple Inheritance
// Date: 10/30/2023

#include <iostream>
#include <string>

using namespace std;

/*
Person
Employee
Manager
*/

class Person {
public:
	void setfName(string text)
	{
		fName = text;
	}
	void setlName(string text)
	{
		lName = text;
	}
	string getfName()
	{
		return fName;
	}
	string getlName()
	{
		return lName;
	}
private:
	string fName, lName; // whatever else
};

class Employee : public Person
{
public: 
	void setjobTitle(string text)
	{
		jobTitle = text;
	}
	void setSalary(double number)
	{
		salary = number;
	}
	string getJobTitle()
	{
		return jobTitle;
	}
	double getSalary()
	{
		return salary;
	}

private:
	string jobTitle;
	double salary;

};


class Manager : public Employee
{
public:
	void setDept(string text)
	{
		dept = text;
	}
	void setTimeOnJob(int number)
	{
		timeOnJob = number;
	}
	string getDept()
	{
		return dept;
	}
	int getTimeOnJob()
	{
		return timeOnJob;
	}
private:
	string dept;
	int timeOnJob; // in months
};

// join class
class joinClass : public Employee, public Manager
{
public:
	// add functions as needed

	void output()
	{
		cout << "This is my join class! :D" << endl;
	}
private:
	// add variables as needed
};


int main()
{
	joinClass atu;

	string sTemp;
	double dTemp;
	int iTemp;

	cout << "Enter your first name: ";
	cin >> sTemp;
	atu.Person::setfName(sTemp);

	cout << "Enter your last name: ";
	cin >> sTemp;
	atu.Person::setlName(sTemp);

	cin.ignore();

	cout << "Enter your job title: ";
	getline(cin, sTemp);
	atu.Employee::setjobTitle(sTemp);

	cout << "Enter salary: $";
	cin >> dTemp;
	atu.Employee::setSalary(dTemp);

	cin.ignore();

	cout << "Enter department name: ";
	getline(cin, sTemp);
	atu.setDept(sTemp);

	cout << "Enter time on job in months: ";
	cin >> iTemp;
	atu.setTimeOnJob(iTemp);

	cout << endl << endl;
	cout << "Name: " << atu.Person::getfName() << " " << atu.Person::getlName() << endl;
	cout << "Job Title: " << atu.Employee::getJobTitle() << endl;
	cout << "Salary: " << atu.Employee::getSalary() << endl;
	cout << "Department: " << atu.getDept() << endl;
	cout << "Time on job: " << atu.getTimeOnJob() << endl;

	return 0;
}