#include "PersonManagement.h"
PersonManagement::PersonManagement()
{
    size=0;
    list=nullptr;
}

PersonManagement::~PersonManagement()
{
//	delete []list;
}
void PersonManagement::input()
{   cout<<"Nhap so nguoi: ";
    cin>>size;
    if (list!=NULL) delete []list;
    list=new Person*[size+10];
    for (int i=1;i<=size;i++){
        int x;
        cout<<"[1]:Customer;[2]:Employee;[3]:Manager :";
        cin>>x;
        switch (x){
        case 1:
            cout<<"Customer:"<<endl;
            list[i]=new Customer();
            list[i]->input();
            break;
        case 2:
            cout<<"Employee:"<<endl;
            list[i]=new Employee();
            list[i]->input();
            break;
        case 3:
            cout<<"Manager:"<<endl;
            list[i]=new Manager();
            list[i]->input();
        }
    }
}
/*void PersonManagement::pushBackE(QString n,QString p,QString f,QString s,QString P)
{
    size++;
    string name=n.toStdString();
    string pass=p.toStdString();
    string full=f.toStdString();
    string sex=s.toStdString();
    string Phone=P.toStdString();
    list[size]=new Employee(name,pass,full,sex,Phone);
    writeFile();
}*/
void PersonManagement::display()
{
    for (int i=1;i<=size;i++){
        cout<<"Person ["<<i<<"]:"<<endl;
        list[i]->display();
    }
}
void PersonManagement::writeFile(){
    ofstream fo(Data::PersonList);
    fo<<size<<endl;
    for (int i=1;i<=size;i++)
        list[i]->writeFile(fo);
    fo.close();
}
void PersonManagement::readFile(){
    ifstream fi(Data::PersonList);
    if (list!=NULL) delete []list;
    fi>>size;
    list=new Person*[size+10];
    for (int i=1;i<=size;i++){
        int x;

        fi>>x;
        fi.get();
        switch (x){
            case 1:
                list[i]=new Customer();
                list[i]->readFile(fi);
                break;
            case 2:
                list[i]=new Employee();
                list[i]->readFile(fi);
                break;
            case 3:
                list[i]=new Manager();
                list[i]->readFile(fi);
        }
    }
    fi.close();
}

int PersonManagement::login(Person* &p)
{
    cout<<"..............Login.......... "<<endl;
    Person* t;
    int kt=0;
    string name,pass;
    cout<<"Nhap user name: ";
    getline(cin,name);
    if (name!="")
    for (int i=1;i<=size;i++){
        if (name==list[i]->getUserName()) {
            t=list[i];
            kt=1;
            break;
        }
    }

    if (kt==0) {cout<<"Tai khoan ko ton tai"<<endl; return 0;}
    else
    {
        cout<<"Nhap pass :";
        getline(cin,pass);
        if (pass!=""){
            if (pass!=t->getPassword())
                {cout<<"Pass ko dung"<<endl; return 0;}
            else {
                p=t;
                return p->getPositon();
            }
        }
    }
    return 0;
}
Person* PersonManagement::findPhone(string phone)
{
    Person* t=nullptr;
    for (int i=1;i<=size;i++){
        if (phone==list[i]->getPhoneNumber()) {
            t=list[i];
        }
    }
    if (t==nullptr) cout<<"ko co khach hang nay";
    else return t;
}


