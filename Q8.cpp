#include<iostream>
using namespace std;
int main()
{
	/*Q8.Write a menu driven program to find following 
	-area of circle
	-area of rectangle
	-circumference of circle
	-perimeter of rectangle.*/
	
	float r;
	int l,w;
	int choice;
	
	cout<<"\nEnter length and width of the rectangle=";
	cin>>l>>w;
	
	cout<<"\nEnter the radius of the circle=";
	cin>>r;
	
	cout<<"\nEnter \n 1 for area of circle\n2 for circumference of the circle";
	cout<<"\nEnter 3 for area of rectangle \n 4 for perimeter of the rectangle";
	cout<<"\nEnter your choice=";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			cout<<"\nThe area of circle ="<<3.14*r*r;
			break;
			
		case 2:
			cout<<"\nThe circumference of the circle ="<<2*3.14*r;
			break;
			
		case 3:
			cout<<"\nThe area of rectangle ="<<l*w;
			break;
			
		case 4:
			cout<<"\nThe perimeter of the rectangle ="<<2*(l+w);
			break;
			
		default :
			cout<<"\nInvalid Input";
	}
	
	return 0;
}
