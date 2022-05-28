#include "ProductManagement.h"
ProductManagement::ProductManagement()
{
    Amount=0;
    read();
}

void ProductManagement::Show()
{
    for(int i=0; i<Amount; i++)
        pr[i].display();
}

void ProductManagement::Add()
{
    Product tam;
    tam.input();
    pr.push_back(tam);
    Amount+=1;
    write();
}

void ProductManagement::Search()
{
    string S;
    cout<<"nhap san pham can tim: "<<endl;
    getline(cin,S);
    for(int i=0; i<Amount; i++)
    {
        if(pr[i].getidProduct().compare(S)==0)
        {
            pr[i].display();
        }
    }
}

void ProductManagement::Remove()
{
    vector<Product> tmp;
    string S;
    cout<<"nhap san pham can xoa: "<<endl;
    getline(cin,S);
    for(int i=0; i<Amount; i++)
    {
        if(pr[i].getidProduct().compare(S)!=0)
         {
            tmp.push_back(pr[i]);
         }
    }
    pr=tmp;
    Amount--;
    write();

}

void ProductManagement::write()
{
    ofstream fo("Product.txt");
    fo<<Amount<<endl;
    for(int i=0; i<Amount; i++)
    {
        fo<<pr[i].getidProduct()<<endl;
        fo<<pr[i].getProductName()<<endl;
        fo<<pr[i].getPrice()<<endl;
    }
    fo.close();
}

void ProductManagement::read()
{
    ifstream fi("Product.txt");
    fi>>Amount;
    for(int i=0; i<Amount; i++)
    {
        string id;
        string name;
        int price;
        fi>>id;
        do
        {
        fi>>name;
        getline(fi,name);
        }
        while(name.length()==0);
        fi>>price;
        Product tmp;
        tmp.setidProduct(id);
        tmp.setProductName(name);
        tmp.setPrice(price);
        pr.push_back(tmp);
    }
}
