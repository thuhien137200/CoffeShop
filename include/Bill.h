#ifndef BILL_H
#define BILL_H

#include <iostream>
#include <fstream>
#include <string>
#include "Date.h"
#include "Data.h"
#include "PersonManagement.h"
#include "ProductManagement.h"
using namespace std;

class Bill
{
    public:
        Bill();
        void input();
        void display();
        string getBillCode();
        int getAmount();


        void writeFile(ofstream& fo);
        void readFile(ifstream& fi);

    private:
        string BillCode;
        Date BillDay;
        Person* Customers;
        Person* Employees;
        vector<Product> prlist;
        vector<int> sl;
        int slsp;
        int Amount;
        int TotalBill;
        int customersent;

};

#endif // BILL_H
