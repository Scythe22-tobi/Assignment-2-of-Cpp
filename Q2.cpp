#include<iostream>
using namespace std;
int main()
{
	/*Q2.Repeat Q1 using switch case.Perform experiments.*/
	
	int num;
	cout<<"\nEnter a number 1/2/3 =";
	cin>>num;
	
	switch(num)
	{
		case 1:
			cout<<"\nOne";
			break;
		
		case 2:
			cout<<"\nTwo";
			break;
		
		case 3:
			cout<<"\nThree";
			break;
		
		default :
			cout<<"\nInvalid input";
	}
	
	return 0;
}
