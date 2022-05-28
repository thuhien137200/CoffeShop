#include "Manager.h"

Manager::Manager()
{
    //ctor
}

Manager::~Manager()
{
    //dtor
}
int Manager::getPositon(){
    return 2;
}
void Manager::input(){
    Account::input();
    this->ManagerCode="C"+to_string(rand()%900+100);
    cout<<"Manager code: "<<ManagerCode<<endl;
    cout<<"Literacy: ";                  getline(cin,Literacy);
    cout<<"Specialize: ";                getline(cin,Specialize);
    format();
}
void Manager::display(){
    cout<<"Manager:"<<endl;
    Account::display();
    cout<<"Manager code: "<<ManagerCode<<endl;
    cout<<"Literacy: "<<Literacy<<endl;
    cout<<"Specialize: "<<Specialize<<endl;
}
void Manager::writeFile(ofstream& fo)
{	fo<<3<<endl;
    Account::writeFile(fo);
    fo<<ManagerCode<<endl;
    fo<<Literacy<<endl;
    fo<<Specialize<<endl;
    format();
}
void Manager::readFile(ifstream& fi)
{
    Account::readFile(fi);
    getline(fi,ManagerCode);
    getline(fi,Literacy);
    getline(fi,Specialize);
}

void Manager::format(){
    Literacy=General::formatparagraph(Literacy);
    Specialize=General::formatparagraph(Specialize);
}
