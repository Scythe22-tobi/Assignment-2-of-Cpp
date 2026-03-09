#include <iostream>
#include<stdio.h>
using namespace std;
int main()
{
    /*
    Q18.
    WAP to scan name, age and hometown of an employee.
    Print all the data.
    */

    char name[50], town[50];
    int age;

    cout<<"Enter name: ";
    gets(&name[0]);
   

    cout<<"Enter age: ";
    cin>>age;

    cout<<"Enter hometown: ";
    gets(&town[0]);
    getchar();

    cout<<"\nName: "<<name;
    cout<<"\nAge: "<<age;
    getchar();
   	printf("\n Hometown = %s",&town[0]);

    return 0;
}
