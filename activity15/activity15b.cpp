#include <iostream>

using namespace std;

int main()
{
    int year, numberOfYears, maxyears;

    cout << "What year do you want to start with? ";
    cin >> year;
    cout << "How many years do you want to check? ";
    cin >> numberOfYears;
    maxyears = year + numberOfYears;
    for (int i = year; i < maxyears ; i++)
    {
        if (i % 4 == 0)
            cout << i << " is a leap year" << endl;
        else
            cout << i << " isn't a leap year" << endl;
    }
    return 0;
}