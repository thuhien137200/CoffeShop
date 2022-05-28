#ifndef PRODUCTMANAGEMENT_H
#define PRODUCTMANAGEMENT_H

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "Product.h"
#include "General.h"

class ProductManagement
{

    public:
        ProductManagement();
        void Show();
        void Add();
        void Search();
        void Remove();

    private:
        vector<Product> pr;
        int Amount;
         void write();
         void read();
};

#endif // PRODUCTMANAGEMENT_H
