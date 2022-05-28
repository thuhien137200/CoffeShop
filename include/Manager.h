#ifndef MANAGER_H
#define MANAGER_H
#include "Account.h"
#include <iostream>
#include <string>
using namespace std;
class Manager: public Account
{
    public:
        Manager();
        ~Manager();
        void input();
        void display();
        void writeFile(ofstream& fo);
        void readFile(ifstream& fi);
        int getPositon();
    private:
        string ManagerCode;
        string Literacy;
        string Specialize;
        void format();
};

#endif // MANAGER_H
