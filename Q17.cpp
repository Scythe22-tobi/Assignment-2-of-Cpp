#include <iostream>
using namespace std;
int main()
{
    /*
    Q17.
    Ask user to choose any one shape from the following.
    - circle
    - rectangle
    - triangle
    For each shape, scan necessary data and ask user to choose between area and circumference/perimeter.
    Print result according to user's choice. (using switch case)
    */

    int shape,ch;
    float r,l,w,a,b,c;

    cout<<"1.Circle\n2.Rectangle\n3.Triangle\n";
    cin>>shape;

    switch(shape)
    {
        case 1:
        {
            cout<<"Enter radius: ";
            cin>>r;

            cout<<"1.Area 2.Circumference\n";
            cin>>ch;

            switch(ch)
            {
                case 1:
                    cout<<"Area = "<<3.14*r*r;
                    break;
                case 2:
                    cout<<"Circumference = "<<2*3.14*r;
                    break;
            }
            break;
        }

        case 2:
        {
            cout<<"Enter length and width: ";
            cin>>l>>w;

            cout<<"1.Area 2.Perimeter\n";
            cin>>ch;

            switch(ch)
            {
                case 1:
                    cout<<"Area = "<<l*w;
                    break;
                case 2:
                    cout<<"Perimeter = "<<2*(l+w);
                    break;
            }
            break;
        }

        case 3:
        {
            cout<<"Enter three sides: ";
            cin>>a>>b>>c;

            cout<<"1.Area 2.Perimeter\n";
            cin>>ch;

            switch(ch)
            {
                case 1:
                    cout<<"Area = "<<(a*b)/2;
                    break;
                case 2:
                    cout<<"Perimeter = "<<a+b+c;
                    break;
            }
            break;
        }
    }

    return 0;
}
