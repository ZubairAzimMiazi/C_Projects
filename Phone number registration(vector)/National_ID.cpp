#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include "Phone_Number_Registration.h"
#include "National_ID.h"
#include "Name_and_Others.h"

using namespace std;

void National_ID::Input_NID()
{
    cin>> nid;

    nidl=nid;
}

int National_ID:: Count_NID(int count=0)
{


     while(nid!=0)
    {
        nid/=10;
        count++;
    }

    return count;
}

void National_ID:: Restrict_NID()
{
    long int count=0;


     while(nid!=0)
    {
        nid/=10;
        count++;
    }

    if(count>15)
    {
        cout<<"please re enter your NID"<<endl;

        cout<<"NID :";

        Input_NID();
    }


    else if(count<14)
    {

         Recheck_NID();
    }




    else if(count==15)
        cout<<"Thank You for registering your NID "<<endl;

        else
            cout<<" "<<endl;

}

void National_ID:: Recheck_NID()
{
    int value=0;
     long int count=0;


     while(nidl!=0)
    {
        nidl/=10;
        count++;
    }


    if(count==13)
    {
        cout<< "Your have an old version NID "<<endl;

        cout<< "If you want to input new NID press 1 otherwise press 0"<< endl;

        cin>> value;

         if(value==1)
         {
             Input_NID();
         }

         else if(value==0)
         {
             cout<<" "<<endl ;
         }



    }
    else if(count<13)
    {
        cout<<"you have entered invalid NID!"<< endl;
        Input_NID();
    }



        else
            cout<<""<<endl;

}
