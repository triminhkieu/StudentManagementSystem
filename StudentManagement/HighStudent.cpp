#include "HighStudent.h"

HighStudent::HighStudent(string name, int age, bool sex, 
	double advancedMathPoint, double advancedEnglishPoint)
	: Student(name, age, sex)
{
	this->advancedMathPoint = advancedMathPoint;
	this->advancedEnglishPoint = advancedMathPoint;
}

void HighStudent::setAdvancedMathPoint(double advancedMathPoint)
{
	this->advancedMathPoint = advancedMathPoint;
}

double HighStudent::getAdvancedMathPoint()
{
	return this->advancedMathPoint;
}

void HighStudent::setAdvancedEnglishPoint(double advancedEnglishPoint)
{
	this->advancedEnglishPoint = advancedEnglishPoint;
}

double HighStudent::getAdvancedEnglishPoint()
{
	return this->advancedEnglishPoint;
}

void HighStudent::displayColorOfUniform()
{
	cout << "Green" << endl;
}

double HighStudent::getGPA()
{
	return (advancedMathPoint + advancedEnglishPoint)/2;
}

void HighStudent::displayAllInformation()
{
	Student::displayAllInformation();
	cout << "Point of Advanced Math: " << this->advancedMathPoint << " - ";
	cout << "Point of Advanced English: " << this->advancedEnglishPoint << " - ";
}
