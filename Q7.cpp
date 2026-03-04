#include<iostream>
using namespace std;
int main()
{
	//Q7.Repeat Q6 using switch case.
	char ch;
	cout<<"\nEnter m or M for male and f or F for female=";
	cin>>ch;
	
	switch(ch)
	{
		case 'm':
		case 'M':
			cout<<"\nMale";
			break;
			
		case 'F':
		case 'f':
				cout<<"\nFelmale";
				break;
		default :
			cout<<"\nInavlid input";
			
	}
	
	return 0;
}
