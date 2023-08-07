#pragma once
#include "Student.h"
using namespace std;
class PrimaryStudent :
    public Student
{
private:
    double basicMathPoint;
    double basicEnglishPoint;

public:
    
    PrimaryStudent(string name, int age, bool sex,
        double basicMathPoint, double basicEnglishPoint);

    void setBasicMathPoint(double basicMathPoint);
    double getBasicMathPoint();

    void setBasicEnglishPoint(double basicEnglishPoint);
    double getBasicEnglishPoint();

    void displayColorOfUniform();
    
    double getGPA();
    
    void displayAllInformation();

};

