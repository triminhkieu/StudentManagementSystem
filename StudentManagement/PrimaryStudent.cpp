#include "PrimaryStudent.h"

PrimaryStudent::PrimaryStudent(string name, int age, bool sex
	, double basicMathPoint, double basicEnglishPoint)
{
	this->setName(name);
	this->setAge(age);
	this->setSex(sex);
	this->basicMathPoint = basicMathPoint;
	this->basicEnglishPoint = basicEnglishPoint;
}

void PrimaryStudent::setBasicMathPoint(double basicMathPoint)
{
	this->basicMathPoint = basicMathPoint;
}

double PrimaryStudent::getBasicMathPoint()
{
	return this->basicMathPoint;
}

void PrimaryStudent::setBasicEnglishPoint(double basicEnglishPoint)
{
	this->basicEnglishPoint = basicEnglishPoint;
}

double PrimaryStudent::getBasicEnglishPoint()
{
	return this->basicEnglishPoint;
}

void PrimaryStudent::displayColorOfUniform()
{
	cout << "Red" << endl;
}

double PrimaryStudent::getGPA()
{
	return (this->basicMathPoint + this->basicEnglishPoint)/2;
}

void PrimaryStudent::displayAllInformation()
{
	Student::displayAllInformation();
	cout << "Point of Basic Math: " << getBasicMathPoint() << " - ";
	cout << "Point of Basic English: " << getBasicEnglishPoint() << " - ";
}
