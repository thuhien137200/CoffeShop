#include "Employee.h"
#include <cstdlib>
#include <cstring>
#include "Date.h"
#include <ctime>
Employee::Employee(){}
Employee::Employee(string name,string pass,string full,string sex,string Phone):Account(name,pass,full,sex,Phone){

   this->EmployeeCode="NV"+to_string(rand()%900+100);
   Date dt;
   this->RegistrationDate=dt.now();
   this->NumberOfWorkShifts=1;
}

Employee::~Employee(){}

void Employee::input(){
    Account::input();
    cout<<"Employee code: ";              getline(cin,EmployeeCode);
    cout<<"Registration date: ";            cin>>RegistrationDate;
    cout<<"Number of work shifts: ";      cin>>NumberOfWorkShifts;
}
int Employee::getPositon(){
    return 1;
}
void Employee::display(){
    cout<<"Employee:"<<endl;
    Account::display();
    cout<<"Employee code: "<<EmployeeCode<<endl;
    cout<<"Registration date: "<<RegistrationDate<<endl;
    cout<<"Number of work shifts: "<<NumberOfWorkShifts<<endl;
}
void Employee::setNumberOfWorkShifts(char NumberOfWorkShifts[]){
    if (strlen(NumberOfWorkShifts)!=0) {
        int val=atoi(NumberOfWorkShifts);
        this->NumberOfWorkShifts=val;
    }
}
void Employee::writeFile(ofstream& fo)
{	fo<<2<<endl;
    Account::writeFile(fo);
    fo<<EmployeeCode<<endl;
    fo<<RegistrationDate<<endl;
    fo<<NumberOfWorkShifts<<endl;
}
void Employee::readFile(ifstream& fi)
{
    Account::readFile(fi);
    getline(fi,EmployeeCode);
    fi>>RegistrationDate;
    char t[100];
    fi.getline(t,100);
    fi.getline(t,100); setNumberOfWorkShifts(t);
}
