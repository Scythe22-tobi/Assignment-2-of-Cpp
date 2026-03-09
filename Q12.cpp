#include<iostream>
using namespace std;
int main()
{
	
	//Write a menu driven program for arithmetic operations of 2 integers where choices will be arithmetic symbols.(+,-,*,/).
	
	int num1,num2;
	cout<<"\nEnter 2 integers=";
	cin>>num1>>num2;
	
	char choice;
	cout<<"\nEnter \n + for addition \n - for subtraction \n * for multiplication \n / for Division\nEnter your choice=";
	cin>>choice;
	
	switch(choice)
	{
		case '+':
			cout<<"\nAdition = "<<num1+num2;
			break;
		
		case '-':
			cout<<"\nSubtraction = "<<num1-num2;
			break;
			
		case '*':
			cout<<"\nMultiplcation ="<<num1*num2;
			break;
			
		case '/':
			cout<<"\nDivision ="<<(float)num1/num2;
			break;
			
		default :
			cout<<"\nInvalid input";
	}

	return 0;
}
