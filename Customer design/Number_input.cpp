#include <iostream>
#include <cstdlib>
#include <cstring>
#include "Number_input.h"
#include "Customer_design.h"
using namespace std;

int Number_input:: Phone_Number_In()
{
     int number=0;

    cout << "enter number :" ;
    cin >> number;

    return number;

}


void Number_input:: Storing_number()
{

    int store[15];

    for(int index=0; index<15; index++)
    {
        cout<< index+1 <<".";
        store[index] = Phone_Number_In();

        if(index==14)
        {
            cout<<"you have entered 15 numbers";
        }
        else
            continue;
    }
}



