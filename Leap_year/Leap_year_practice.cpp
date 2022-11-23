#include <iostream>
using namespace std;

int main()
{
    int year;

    cout << "Enter the year to check wheter it's Leap Year or not";
    cin >> year;

    if (year % 100 == 0)
    {
        if (year % 400 == 0)
        {
            cout << year << " is a Leap Year.";
        }
        else 
        {
            cout << year << " is not a Leap Year. ";
        }
    }
    else {
        if(year % 4 == 0)
        {
            cout << year << " is a Leap Year.";
        }
        else
        {
            cout << year << " is not a Leap Year. ";
        }
    }
    return 0;
}