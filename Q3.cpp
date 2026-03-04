#include<iostream>
using namespace std;
int main()
{
	/*Q3.Scan a character from user.If user gives 'A',print "APPLE",
	for 'B' print "BANANA",for 'C' print "CHERRY".
	For any other character,print Some Other Fruit.Do this using if else.*/
	
	char ch;
	cout<<"\nEnter a character A/B/C =";
	cin>>ch;
	
	if(ch=='A')
	{
		cout<<"\nApple";
	}
	else if(ch=='B')
	{
		cout<<"\nBanana";
	}
	else if(ch=='C')
	{
		cout<<"\nCherry";
	}
	else
	{
		cout<<"\nInvalid input";
	}
	
	return 0;
}
