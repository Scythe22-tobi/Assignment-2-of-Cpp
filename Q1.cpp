#include<iostream>
using namespace std;
int main()
{
	/*Q1.Scan a number from user.If user gives 1,print "ONE",if user gives 2,print "TWO",
	for 3,print "THREE".If user gives some other number,print wrong input.
	Do this using if else.*/
	
	int num;
	cout<<"\nEnter a number 1/2/3 =";
	cin>>num;
	
	if(num==1)
	{
		cout<<"\nOne";
	}
	else if(num==2)
	{
		cout<<"\nTwo";
	}
	else if(num==3)
	{
		cout<<"\nThree";
	}
	else
	{
		cout<<"\nInvalid Input";
	}
	return 0;
}
