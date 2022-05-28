#ifndef LOGIN_H
#define LOGIN_H
#include "PersonManagement.h"
#include "Person.h"
#include <iostream>
#include <string>
using namespace std;
class Login
{
    public:
        Login();
        virtual ~Login();
        void logInAccount();
        void signUpAccount();
        string getAccountOwner();
    protected:

    private:
        Person *AccountOwner;
};

#endif // LOGIN_H
