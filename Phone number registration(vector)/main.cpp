#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include "Phone_Number_Registration.h"
#include "National_ID.h"
#include "Name_and_Others.h"

using namespace std;

int main()
{
   char name[40];

   Phone_Number_Registration object;
   National_ID object_2;


   cout<< " Please enter your name : ";
   cin.getline(name, 40);

   Name_and_Others object_3(name);

   cout<< " Please enter you NID : ";

   object_2.Input_NID();

   object_2.Restrict_NID();

   object.Repeat();






}




