#include <iostream>
#include <cstdlib>
#include <cstring>
#include "Number_input.h"
#include "Customer_design.h"
#include <fstream>

using namespace std;

int main()
{

    ofstream myfile;
    myfile.open("datasave.txt");

    Number_input n;
    Customer_design c;
    myfile<<c.Name();
    myfile.close();
    n.Storing_number();


}

