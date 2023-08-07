#pragma once
#include "Student.h"
class HighStudent :
    public Student
{
private:
    double advancedMathPoint;
    double advancedEnglishPoint;

public:
    HighStudent(string name, int age, bool sex,
        double advancedMathPoint, double advancedEnglishPoint);

    void setAdvancedMathPoint(double advancedMathPoint);
    double getAdvancedMathPoint();

    void setAdvancedEnglishPoint(double advancedEnglishPoint);
    double getAdvancedEnglishPoint();

    void displayColorOfUniform();

    double getGPA();

    void displayAllInformation();
};

