#ifndef PHONE_NUMBER_REGISTRATION_H
#define PHONE_NUMBER_REGISTRATION_H


#include <vector>
#include <string>
#include <iostream>

using namespace std;


class Phone_Number_Registration
{
    public:
       vector <long long int> numbers;
       void Edit_Number();
       void Show_Numbers();
       void Register_Number();
       void Restrict_Numbers();
       void Repeat();
       void Others();

    protected:

    private:
};

#endif  // PHONE_NUMBER_REGISTRATION_H
