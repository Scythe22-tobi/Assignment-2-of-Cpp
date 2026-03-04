#include<iostream>
using namespace std;
int main()
{
	/*Q6.Scan a gender from user.If user enters m OR M , print MALE.
	If user enters f OR F , print FEMALE.Print wrong input for any other character.
	(Using if else)*/
	
	char ch;
	cout<<"\nEnter m or M for male and f or F for female=";
	cin>>ch;
	
	if(ch=='m' || ch=='M')
	{
		cout<<"\nMale";
	}
	else if(ch=='f' || ch=='F')
	{
		cout<<"\nFemale";
	}
	else
	{
		cout<<"\nIncalid input";
	}
	
	return 0;
}
