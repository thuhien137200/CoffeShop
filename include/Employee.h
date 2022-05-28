#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "Account.h"
#include <iostream>
#include <string>
#include <string>
#include <fstream>
using namespace std;
class Employee: public Account
{
    public:
        Employee();
        Employee(string name,string pass,string full,string sex,string Phone);
        ~Employee();
        void input();
        void display();
        void setNumberOfWorkShifts(char NumberOfWorkShifts[]);
        void writeFile(ofstream& fo);
        void readFile(ifstream& fi);
        int getPositon();
    private:
        string EmployeeCode;
        Date RegistrationDate;
        int NumberOfWorkShifts;
};

#endif // EMPLOYEE_H
