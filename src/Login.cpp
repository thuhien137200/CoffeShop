#include "Login.h"

Login::Login()
{

}

Login::~Login()
{

}

void Login::logInAccount()
{   PersonManagement a;
    a.readFile();
    AccountOwner=nullptr;
    if ((a.login(AccountOwner))!=0) {

            AccountOwner->display();
    }
}

void Login::signUpAccount()
{
    PersonManagement a;
    a.readFile();
    a.display();
  //  a.pushBackE();
    a.display();
    a.writeFile();
}
string Login::getAccountOwner()
{
    return AccountOwner->getName();
}

