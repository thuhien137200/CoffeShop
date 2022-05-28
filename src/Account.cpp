#include "Account.h"
Account::Account()
{
    //ctor
}

Account::~Account()
{
    //ctor
}
Account::Account(string name,string pass,string full,string sex,string Phone):Person(full,sex,Phone){
    this->UserName=name;
    this->Password=pass;
    format();
}

void Account::input()
{   fflush(stdin);

    cout<<"User Name: "; getline(cin,UserName);
    cout<<"Password: ";  getline(cin,Password);
    Person::input();
    format();

}

void Account::display()
{
    cout<<"User Name: "<<UserName<<endl;
    cout<<"Password: "<<Password<<endl;
    Person::display();
}

void Account::setUserName(string UserName)
{
    if(UserName!="")
        this->UserName=UserName;

}

string Account::getUserName()
{
    return UserName;
}

void Account::setPassword(string Password)
{
    if(Password!="")
        this->Password=Password;

}

string Account::getPassword()
{
    return Password;
}

void Account::writeFile(ofstream& fo)
{
    fo<<UserName<<endl;
    fo<<Password<<endl;
    Person::writeFile(fo);
    format();
}

void Account::readFile(ifstream& fi)
{
    getline(fi,UserName);
    getline(fi,Password);
    Person::readFile(fi);
}
void Account::format(){
    UserName=General::iTrim(UserName);
    if (General::isWhiteSpace(UserName)) UserName="";
    Password=General::iTrim(Password);
    if (General::isWhiteSpace(Password)) Password="";
}
