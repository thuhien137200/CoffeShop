#include "Bill.h"

Bill::Bill()
{

}
void Bill::input()
{
    this->BillCode = "B"+to_string(rand()%900+100);
    cout<<" - Bill Code: "<<this -> BillCode<<endl;
    //this -> BillDay =
   // cout<<Date::now();
    cout<<" - Date: "<<this -> BillDay<<endl;
    cout<<" - Customer Phone: ";
    string CustomerPhone;
    getline(cin,CustomerPhone);
    PersonManagement a;
    a.readFile();
    Customers = a.findPhone(CustomerPhone);
    cout<<" - Name customer: "<<Customers->getName();
    string NameEmployee = Login::getAccountOwner();
    cout<<" - Employee Name: "<<NameEmployee<<endl;

    int i=0;
    this->slsp=0;
    TotalBill=0;
    do
    {
        cout<<" - Product Code: ";
        string idProduct
        getline(cin,idProduct);
        ProductManagement p;
        p.readFile();
        prlist[i] = p.findid(idProduct);
        if(prlist[i]!=nullptr){
            cout<<" - Product Name: "<<prlist[i].getProductName();
            cout<<" - Nhap so luong: ";
            cin>>sl[i];
            TotalBill+=prlist[i].getPrice()*sl[i];
            i++;
        }else cout<<"khong có san pham"<<endl;

    }
    while(prlist[i]=="");
    this->slsp=i;
    do{
        cout<< " - Tien khach tra: ";
        getline(cin,customersent);
    }while(customersent>=TotalBill);
    string change=customersent-TotalBill;


}

void Bill::display()
{
    cout<<" - Bill Code: "<<BillCode<<endl;
    cout<<" - Date: "<<BillDay<<endl;
    cout<<" - Customer Phone: "<<CustomerPhone<<endl;
    cout<<" - Name customer: "<<Customers.getName();
    cout<<" - Employee Name: "<<NameEmployee<<endl;
    for(int i=0; i<=slsp; i++)
    {
        cout<<" - Product Name: "<<prlist[i].getProductName();
        cout<<" - so luong: "<<sl[i];
    }
    cout<<" - Tong tien: "<<TotalBill<<endl;
    cout<< " - Tien khach tra: "<<customersent<<endl;
    cout<< " - Tien thối khach: "<<change<<endl;

}


void Bill::writeFile(ofstream& fo)
{
    fo<<BillCode<<endl;
    fo<<BillDay<<endl;
    fo<<CustomerPhone<<endl;
    fo<<Customers.getName()<<endl;
    fo<<NameEmployee<<endl;
    fo<<slsp<<endl;
    for(int i=0; i<slsp; i++)
    {
        fo<<prlist[i].getProductName()<<endl;
        fo<<sl[i]<<endl;
    }
    fo<<TotalBill<<endl;
    fo<<customersent<<endl;
    fo<<change<<endl;



}

void Bill::readFile(ifstream& fi)
{
    getline(fi,BillCode);
    getline(fi,BillDay);
    getline(fi,CustomerPhone);
    getline(fi,Customers.getName());
    getline(fi,NameEmployee);
    fi>>slsp;
    string t;
    getline(fi,t);
    for(int i=0; i<slsp; i++)
    {
        getline(fi,prlist[i].getProductName());
        fi>>sl[i];
        getline(fi,t);
    }
    getline(fi,TotalBill);
    getline(fi,customersent);
    getline(fi,change);
}
string Bill::getBillCode()
{
    return "";
}

int Bill::getAmount()
{
    return Amount;
}

