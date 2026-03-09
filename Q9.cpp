#include<iostream>
using namespace std;
int main()
{
	/*Q9.Scan age and gender from a user.Check if he or she can marry or not.
	(using if else)*/
	
	char ch;
	int age;
	
	cout<<"\nEnter m for male and f for female =";
	cin>>ch;
	
	cout<<"\nEnter your age =";
	cin>>age;
	
	if((ch=='m' || ch=='f') && age>=21)
	{
		cout<<"\nCan Marry";	
	}	
	else
	{
		cout<<"\nCan't Marry";
	}
	
	return 0;
}

