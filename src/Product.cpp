#include "Product.h"


Product::Product()
{
    //ctor
}
Product::~Product()
{

}
Product::Product(string ProductName, int Price)
{
    this -> idProduct ="SP"+to_string(rand()%900+100);
    this -> ProductName = ProductName;
    this -> Price = Price;
}

void Product::setidProduct(string idProduct)
{
    if(idProduct!="")
        this->idProduct=idProduct;

}

string Product::getidProduct()
{
    return idProduct;
}

void Product::setProductName(string ProductName)
{
    if(ProductName!="")
        this->ProductName=ProductName;

}

string Product::getProductName()
{
    return ProductName;

}
void Product::setPrice(int Price)
{
    if(Price>0)
        this->Price=Price;

}

int Product::getPrice()
{
    return Price;
}

void Product::input()
{
    time_t t;
    srand((unsigned) time(&t));
    this -> idProduct ="SP"+to_string(rand() % 1000);
    cout<<" - ID Product: "<<this -> idProduct<<endl;

    cout<<" - Product name: ";
    getline(cin,ProductName);
    cout<<" - Price: ";
    cin>>Price;
    cin.ignore();
    format();

}

void Product::display()
{
    cout << " - ID Product: "<<idProduct<<endl;
    cout << " - Product name: "<<ProductName<<endl;
    cout << " - Price: "<<Price<<endl;

}

void Product::format()
{
    this->ProductName = General::format(this->ProductName);
}
