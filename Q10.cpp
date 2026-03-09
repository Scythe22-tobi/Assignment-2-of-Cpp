#include<iostream>
using namespace std;
int main()
{
    int age;
    char gender;

    cout<<"Enter age: ";
    cin>>age;

    cout<<"Enter gender (M/F): ";
    cin>>gender;

    switch(gender)
    {
        case 'M':
        case 'm':
            if(age>=21)
                cout<<"Male is eligible for marriage";
            else
                cout<<"Male is not eligible for marriage";
            break;

        case 'F':
        case 'f':
            if(age>=18)
                cout<<"Female is eligible for marriage";
            else
                cout<<"Female is not eligible for marriage";
            break;

        default:
            cout<<"Invalid gender input";
    }

    return 0;
}
	

