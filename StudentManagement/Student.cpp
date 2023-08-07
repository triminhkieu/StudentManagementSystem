#include "Student.h"

Student::Student()
{
}

Student::Student(string name, int age, bool sex)
{
	this->name = name;
	this->age = age;
	this->sex = sex;
}

void Student::setName(string name)
{
	this->name = name;
}

string Student::getName()
{
	return this->name;
}

void Student::setAge(int age)
{
	if (age < 0) {
		this->age = 0;
	}
	else
	{
		this->age = age;
	}
}

int Student::getAge()
{
	return this->age;
}

void Student::setSex(bool sex)
{
	this->sex = sex;
}

bool Student::getSex()
{
	return this->sex;
}

void Student::displayColorOfUniform()
{
}

void Student::displayAllInformation()
{
	cout << "Name: " << getName() << " - ";
	cout << "Age: " << getAge() << " - ";
	cout << "Sex: " << ((this->sex) ? "Male" : "Female") << " - ";
}


