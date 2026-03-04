#include<iostream>
using namespace std;
int main()
{
	/*Q4.Repeat Q3 using switch.*/
	
	char ch;
	cout<<"\nEnter a character A/B/C =";
	cin>>ch;
	
	switch(ch)
	{
		case 'A':
			cout<<"\nApple";
			break;
		
		case 'B':
			cout<<"\nBanana";
			break;
		
		case 'C':
			cout<<"\nCherry";
			break;
		
		default :
			cout<<"\nInvalid input";
	}
	
	return 0;
}
