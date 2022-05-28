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
        Product findid(string idProduct);

    private:
        vector<Product> pr;
        int Amount;
         void writeFile();
         void readFile();
};

#endif // PRODUCTMANAGEMENT_H
