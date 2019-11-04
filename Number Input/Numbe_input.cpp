#include "Numbe_input.h"
#include <iostream>
#include <cstdlib>

using namespace std;

int Number_input:: Phone_Number_In()
{
     int number=0;
    int count=0;

    cout << "enter number" ;
    cin>> number;

    while(number)
    {
        number/= 10;
        count++ ;
    }
    for(int index=0; index<150; index++)
    {

    if(count>=12)
    {
        cout<<"you have to enter a 11 digit number";
        number=0;
        cin >> number;
    }
    else

        break;

    }

    return number;

}


void Number_input:: Storing_number()
{

    int store[15];

    for(int index=0; index<15; index++)
    {
        store[index] = Phone_Number_In();
    }

}

