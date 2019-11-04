#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include "National ID.h"

void National_ID::input_nid()
{
    cin>> nid;
}

int National_ID:: count_nid(int count=0)
{


     while(nid)
    {
        nid/=10;
        count++;
    }

    return count;
}

void National_ID:: restrict_nid()
{
    int count=0;

     while(nid)
    {
        nid/=10;
        count++;
    }

    if(count>15)
    {
        cout<<"please re enter your NID"<<endl;

        cout<<"NID :";

        input_nid();
    }

    else
        cout<<"Thank You for registering your NID ";

}

void National_ID:: recheck_nid()
{
    int value=0;
    int count=0;

     while(nid)
    {
        nid/=10;
        count++;
    }

    if(count==13)
    {
        cout<< "Your have an old version NID "<<endl;

        cout<< "If you want to input new NID press 1 otherwise press 0"<< endl;

        cin>> value;

         if(value=1)
         {
             input_nid();
         }

         else if(value==0)
         {
             cout<<"Your NID is : "<<nid ;
         }


    }

}
