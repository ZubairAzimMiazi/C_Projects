#include <iostream>
#include <cstdlib>
#include <cstring>
#include "Number_input.h"
#include "Customer_design.h"

using namespace std;

Customer_design::Customer_design()
{



}


char Customer_design:: Name()
{

    char name[20];

    cout<<"enter your name : ";

     cin.getline(name,20);

     return name[20];

}
