#include "Person.h"

Person::Person(){ }
Person::Person(string full,string sex,string Phone){
    this->Name=full;
    this->Adress="";
    this->PhoneNumber=Phone;
    this->DateOfBirth=Date();
    this->Sex=sex;
    this->HomeTown="";
    this->IDCardNumber="";
    format();

};
int Person::getPositon(){
    return 0;
}
Person::~Person(){ }
void Person::input()
{	fflush(stdin);
    cout<<"Name: ";              getline(cin,Name);
    cout<<"Adress: ";            getline(cin,Adress);
    cout<<"Phone number: ";      getline(cin,PhoneNumber);
    cout<<"Date of birth: ";     cin>>DateOfBirth;
    fflush(stdin);
    cout<<"Gender: ";               getline(cin,Sex);
    cout<<"Home town: ";         getline(cin,HomeTown);
    cout<<"ID card number: ";    getline(cin,IDCardNumber);
    format();
}
void Person::display()
{
    cout<<"Name: "<<Name<<endl;
    cout<<"Adress: "<<Adress<<endl;
    cout<<"Phone number: "<<PhoneNumber<<endl;
    cout<<"Date of birth: "<<DateOfBirth<<endl;
    cout<<"Gender: "<<Sex<<endl;
    cout<<"Home town: "<<HomeTown<<endl;
    cout<<"ID card number: "<<IDCardNumber<<endl;
}
void Person::writeFile(ofstream &fo)
{
    fo<<Name<<endl;
    fo<<Adress<<endl;
    fo<<PhoneNumber<<endl;
    fo<<DateOfBirth<<endl;
    fo<<Sex<<endl;
    fo<<HomeTown<<endl;
    fo<<IDCardNumber<<endl;
}
void Person::readFile(ifstream& fi)
{
    getline(fi,Name);
    getline(fi,Adress);
    getline(fi,PhoneNumber);
    fi>>DateOfBirth;
    getline(fi,Sex);
    getline(fi,Sex);
    getline(fi,HomeTown);
    getline(fi,IDCardNumber);
    format();
}

string Person::getUserName()
{
    return "";
}

string Person::getPassword()
{
    return "";
}

string Person::getName()
{
    return "";
}

string Person::formatPhone(string Phone){
    if(General::haveCharacter(Phone)) cout<<"EROR: HAVE CHARACTER"<<endl;
    else {
        Phone=General::deleteAllSpace(Phone);
        if (Phone[0]!='0' || Phone.length()!=10) cout<<"EROR: THIS PHONE NUMBER IS NOT AVAILABLE"<<endl;
        else return Phone;
    }
    return "";
}
void Person::format(){
    Name=General::format(Name);
    Adress=General::format(Adress);
    PhoneNumber=formatPhone(PhoneNumber);
    Sex=General::deleteAllSpace(Sex);
    HomeTown=General::format(HomeTown);
    IDCardNumber=General::deleteAllSpace(IDCardNumber);
    if (General::haveCharacter(IDCardNumber)) IDCardNumber="";
}
