#include "BillManagement.h"

BillManagement::BillManagement()
{
    int amount=0;
    readFile();
}
void BillManagement::show()
{
    for(int i=0; i<amount; i++)
        b[i].display();
}

void BillManagement::Add()
{
    Bill t;
    t.input();
    b[amount]=t;
    amount++;
    writeFile();

}

void BillManagement::Search()
{
    string s;
    cout<<" - Nhap bill code: ";
    getline(cin,s);
    for(int i=0; i<amount; i++)
    {
        if(b[i].getBillCode().comepare(s)==0)
            b[i].display();
    }
}

void BillManagement::Remove()
{
    vector<Bill> t;
    string S;
    cout<<"Nhap bill can xoa: ";
    getline(cin,S);
    for(int i=0; i<amount; i++)
    {
        if(b[i].getBillCode().compare(S)!=0)
            t.push_back(b[i]);
    }
    b=t;
    amount--;
    writeFile();
}

void BillManagement::writeFile()
{
   ofstream fo(Data::BillList);
   fo<<amount<<endl;
   for(int i=0; i<amount; i++)
   {
       b[i].writeFile(fo);
   }

}

void BillManagement::readFile()
{
    ifstream fi(Data::BillList);
   fi>>amount;
   for(int i=0; i<amount; i++)
   {
       b[i].readFile(fi);

}
