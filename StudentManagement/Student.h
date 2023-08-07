#pragma once

#include <iostream>
using namespace std;

class Student
{
private:
	string name;
	int age;
	bool sex;

public:
	Student();
	Student(string name, int age, bool sex);

	void setName(string name);
	string getName();

	void setAge(int age);
	int getAge();

	void setSex(bool sex);
	bool getSex();

	virtual void displayColorOfUniform();
	virtual void displayAllInformation();
};

