#include<iostream>
using namespace std;
int main()
{
	//Q5.Write a menu driven program for 4 arithmetic operations of 2 integers.
	//(Menu Driven means switch case)
	
	int num1,num2;
	cout<<"\nEnter 2 integers=";
	cin>>num1>>num2;
	
	int choice;
	cout<<"\nEnter \n1 for addition \n2 for subtraction \n3 for division\n4 for multiplication\nEnter your choice=";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			cout<<"\nAdition = "<<num1+num2;
			break;
		
		case 2:
			cout<<"\nSubtraction = "<<num1-num2;
			break;
			
		case 3:
			cout<<"\nMultiplcation ="<<num1*num2;
			break;
			
		case 4:
			cout<<"\nDivision ="<<(float)num1/num2;
			break;
			
		default :
			cout<<"\nInvalid input";
	}
	
	return 0;
}


