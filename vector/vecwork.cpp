#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include "vecwork.h"


void vecwork :: Register_number()
{
    int phone_number;

    cin>> phone_number;

   numbers.push_back(phone_number);

}

void vecwork:: show_numbers()
{


   cout<<" Your input number is : "<<endl;

   for(int i=0; i<numbers.size(); i++)
    {
        cout<<numbers[i]<<endl;
    }

}

void vecwork:: restrict_array()
{

    if(numbers.size()==15)
    {
        cout<<"you have 15 numbers "<<endl;
    }
    else if(numbers.size()>15)
    {

        numbers.pop_back();
    }
}

