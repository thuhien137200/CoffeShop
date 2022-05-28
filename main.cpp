#include <iostream>
#include <fstream>
#include "General.h"
#include "Product.h"
#include "ProductManagement.h"
#include "PersonManagement.h"
#include "Login.h"
#include "Bill.h"
using namespace std;

int main()
{
    Bill a;
    a.input();
    a.display();
    return 0;
}
