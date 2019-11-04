#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include "Phone_Number_Registration.h"
#include "National_ID.h"
#include "Name_and_Others.h"

using namespace std;


void Phone_Number_Registration :: Register_Number()
{
    long long int phone_number;
    cout<<"Please enter your phone number"<<endl;

    cin>> phone_number;

   numbers.push_back(phone_number);

   Restrict_Numbers();

}

void Phone_Number_Registration:: Show_Numbers()
{


   cout<<" Your input number is : "<<endl;

   for(int index=0; index<numbers.size(); index++)
    {
        cout<<index<<"."<<numbers[index]<<endl;
    }

}

void Phone_Number_Registration:: Restrict_Numbers()
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

void Phone_Number_Registration:: Edit_Number()
{
    Show_Numbers();

     int item;
     long long int phone_number;

    cout<< "Enter the position of the number you want to edit "<<endl;

    cin>>item;

    cout<< "Enter your phone number "<<endl;

    cin>>phone_number;

    numbers[item]=phone_number;



}

void Phone_Number_Registration::Repeat()
{

    while(1)
    {

        int value;
    cout<<"press 1/2/3/4 "<<endl;



    cout<<"1.Register new number;"<<endl;
    cout<<"2.Show number;"<<endl;
    cout<<"3.Edit number "<<endl;
    cout<<"4.Exit"<<endl;
     cin>>value;

    switch(value)
    {
    case 1:
        Register_Number();
        break;
    case 2:
        Show_Numbers();
         break;
    case 3:
        Edit_Number();
        break;
    case 4 :
        break;
    default :
        cout<<"You have entered invalid input! Please try again!"<<endl;
        break;

    }
    }
}
