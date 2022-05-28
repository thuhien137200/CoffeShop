#ifndef BILLMANAGEMENT_H
#define BILLMANAGEMENT_H

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "Bill.h"
#include "General.h"

class BillManagement
{
    public:
        BillManagement();
        void show();
        void Add();
        void Search();
        void Remove();

    private:
        vector<Bill> b;
        int amount;
        void writeFile();
        void readFile();
};

#endif // BILLMANAGEMENT_H
