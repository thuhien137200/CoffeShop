#include "Customer.h"

Customer::Customer(){}
Customer::~Customer(){}
void Customer::input(){
    Person::input();
    this->CustomerCode="C"+to_string(rand()%900+100);
    cout<<"Customer code: "<<CustomerCode<<endl;
    cout<<"Sale: ";      cin>>sale;
}
int Customer::getPositon(){
    return 0;
}
string Customer::getUserName()
{
    return "";
}

string Customer::getPassword()
{
    return "";
}

void Customer::display(){
    cout<<"Customer:"<<endl;
    Person::display();
    cout<<"Customer code: "<<CustomerCode<<endl;
    cout<<"Sale: "<<sale<<endl;
}
void Customer::setSale(char sale[]){
    if (strlen(sale)!=0) {
        int val=atoi(sale);
        this->sale=val;
    }
}
void Customer::writeFile(ofstream& fo)
{	fo<<1<<endl;
    Person::writeFile(fo);
    fo<<CustomerCode<<endl;
    fo<<sale<<endl;
}
void Customer::readFile(ifstream& fi)
{
    Person::readFile(fi);
    getline(fi,CustomerCode);
    char t[100];
    fi.getline(t,100); setSale(t);
}
