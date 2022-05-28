#ifndef PERSONMANAGEMENT_H
#define PERSONMANAGEMENT_H
#include "Data.h"
#include "Person.h"
#include "Account.h"
#include "Customer.h"
#include "Employee.h"
#include "Manager.h"
#include <iostream>
#include <string>
#include <string>
#include <fstream>
using namespace std;
class PersonManagement
{
    public:
        int size;
        Person **list;
        PersonManagement();
        ~PersonManagement();
        void input();
        void display();
        void writeFile();
        void readFile();
        int login(Person* &p);
        Person* findPhone(string phone);

        void pushBackE(string name,string pass,string full,string sex,string Phone);
    private:

};

#endif // PERSONMANAGEMENT_H
