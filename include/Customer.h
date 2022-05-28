#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "Person.h"
#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
using namespace std;
class Customer : public Person
{
    public:
        Customer();
        ~Customer();
        void input();
        void display();
        void setSale(char sale[]);
        void writeFile(ofstream& fo);
        void readFile(ifstream& fi);
        string getUserName();
        string getPassword();
        int getPositon();
    private:
        string CustomerCode;
        int sale;
};

#endif // CUSTOMER_H
