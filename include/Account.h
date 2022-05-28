#ifndef ACCOUNT_H
#define ACCOUNT_H
#include "Person.h"
#include "General.h"
#include <iostream>
#include <string>
using namespace std;
class Account: public Person
{
    public:
        Account();
        Account(string name,string pass,string full,string sex,string Phone);
        virtual ~Account();
        virtual void input();
        virtual void display();

        void setUserName(string UserName);
        string getUserName();

        void setPassword(string Password);
        string getPassword();

        virtual void writeFile(ofstream& fo);
        virtual void readFile(ifstream& fi);

    protected:

    private:
        string UserName;
        string Password;
        void format();
};

#endif // ACCOUNT_H
