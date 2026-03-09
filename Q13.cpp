#include <iostream>
using namespace std;
int main()
{
	
	/*
	Q13.
	Scan necessary data to find simple interest.If simple interest is greater than 5000/-,
	ask user to buy equity of total amount(principle and simple interest).
	If simple interest is less than or equal to 5000/-,ask user to invest total amount in mutual fund.
	(if else code,you can't use switch case here.)
	*/
	
    float p, r, si, total;
    int t;

    cout << "Enter principal amount: ";
    cin >> p;

    cout << "Enter rate of interest: ";
    cin >> r;

    cout << "Enter time: ";
    cin >> t;

    si = (p * r * t) / 100;
    total = p + si;

    cout << "Simple Interest = " << si << endl;
    cout << "Total Amount = " << total << endl;

    if(si > 5000)
    {
        cout << "Buy equity of total amount.";
    }
    else
    {
        cout << "Invest total amount in mutual fund.";
    }

    return 0;
}
