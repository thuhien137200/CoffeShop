#ifndef PERSON_H
#define PERSON_H
#include "Date.h"
#include <iostream>
#include <string>
#include <fstream>
#include "General.h"
using namespace std;
class Person
{
    public:
        Person();
        Person(string full,string sex,string Phone);
        virtual void input()=0;
        virtual void display()=0;
        virtual ~Person()=0;
        virtual void writeFile(ofstream& fo);
        virtual void readFile(ifstream& fi);
        virtual string getUserName();
        virtual string getPassword();
        virtual int getPositon();
        string getName();
        string getPhoneNumber();

    private:
       string Name;
       string Adress;
       string PhoneNumber;
       Date DateOfBirth;
       string Sex;
       string HomeTown;
       string IDCardNumber;
       void format();
       string formatPhone(string Phone);
};

#endif // PERSON_H
