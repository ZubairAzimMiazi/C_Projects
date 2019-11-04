#ifndef NATIONAL_ID_H
#define NATIONAL_ID_H


#include <iostream>

using namespace std;

class National_ID: public Phone_Number_Registration
{
    public:
        long long int nid ;
        long long int nidl;

        void Input_NID();
        int Count_NID(int);
        void Restrict_NID();
        void Recheck_NID();


    protected:

    private:
};

#endif // NATIONAL_ID_H
