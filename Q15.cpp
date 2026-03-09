#include <iostream>
using namespace std;
int main()
{
    /*
    Q15.
    You are an employee in a Company. Your task is to calculate bonus for Diwali and print
    total salary (basic salary + bonus). Bonus should be calculated by using following conditions.

    - If salary is more than 15000/-, bonus will be 20% of salary.
    - If salary is less than or equal to 15000/-, bonus will be 25% of salary.

    Print total salary of employee for the month of Diwali.
    Input from user is basic salary.
    */

    float salary, bonus, total;

    cout<<"Enter basic salary: ";
    cin>>salary;

    if(salary > 15000)
    {
        bonus = salary * 0.20;
    }
    else
    {
        bonus = salary * 0.25;
    }

    total = salary + bonus;

    cout<<"Bonus = "<<bonus<<endl;
    cout<<"Total Salary for Diwali = "<<total<<endl;

    return 0;
}
