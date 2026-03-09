#include<iostream>
using namespace std;
int main()
{
	//Q11.Write a menu driven program to print square or cube of given number.
	
	int num;
	cout<<"\nEnter a number = ";
	cin>>num;
	
	int choice;
	cout<<"\nEnter 1 for square and 2 for cube =";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			cout<<"\nSquare ="<<num*num;
			break;
			
		case 2:
			cout<<"\nCube = "<<num*num*num;
			break;
			
		default :
			cout<<"\nInvalid input";
			break;
	}

	return 0;

}
