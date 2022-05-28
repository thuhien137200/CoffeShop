#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "General.h"
using namespace std;
class Product
{
    public:
        Product();
        virtual ~Product();
        Product(string ProductName, int Price);
        void input();
        void display();
        void setidProduct(string idProduct);
        string getidProduct();

        void setProductName(string ProductName);
        string getProductName();

        void setPrice(int Price);
        int getPrice();

        friend ifstream& operator>>(ifstream& fi, Product& pr);
        friend ofstream& operator<<(ofstream& fo, Product& pr);
        friend class ProductManagement;

    protected:

    private:
        string idProduct;
        string ProductName;
        int Price;
        void format();
};

#endif // PRODUCT_H
