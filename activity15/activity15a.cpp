#include <iostream>

using namespace std;

int main()
{
    float amount, interestRate;
    int years;

    cout << "Enter the amount of Rands: ";
    cin >> amount;
    cout << "Enter the interest rate: ";
    cin >> interestRate;
    cout << "Enter the number of years: ";
    cin >> years;
    cout.setf(ios::fixed);
    cout.precision(2);
    for (int i = 1; i <= years; i++)
    {
        amount += (amount * interestRate) / 100;
        cout << "After " << i << " years the amount will be " << amount << endl;
    }
    return 0;
}