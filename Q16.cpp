#include <iostream>
using namespace std;
int main()
{
    /*
    Q16.
    Ask user to choose any one shape from the following.
    - circle
    - rectangle
    - triangle

    For each shape, scan necessary data and ask user to choose between area and circumference/perimeter.
    Print result according to user's choice. (using if else)
    */

    int shape,ch;
    float r,l,w,a,b,c;

    cout<<"1.Circle\n2.Rectangle\n3.Triangle\n";
    cin>>shape;

    if(shape==1)
    {
        cout<<"Enter radius: ";
        cin>>r;

        cout<<"1.Area 2.Circumference\n";
        cin>>ch;

        if(ch==1)
        {
            cout<<"Area = "<<3.14*r*r;
        }
        else
        {
            cout<<"Circumference = "<<2*3.14*r;
        }
    }
    else if(shape==2)
    {
        cout<<"Enter length and width: ";
        cin>>l>>w;

        cout<<"1.Area 2.Perimeter\n";
        cin>>ch;

        if(ch==1)
        {
            cout<<"Area = "<<l*w;
        }
        else
        {
            cout<<"Perimeter = "<<2*(l+w);
        }
    }
    else if(shape==3)
    {
        cout<<"Enter three sides: ";
        cin>>a>>b>>c;

        cout<<"1.Area 2.Perimeter\n";
        cin>>ch;

        if(ch==1)
        {
            cout<<"Area = "<<(a*b)/2;
        }
        else
        {
            cout<<"Perimeter = "<<a+b+c;
        }
    }

    return 0;
}
