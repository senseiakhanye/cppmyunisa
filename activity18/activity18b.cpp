#include <iostream>
#include <cmath>

using namespace std;

float compoundInterest(int years, float amount, float interestRate)
{
    return amount * pow(1 + interestRate/100, years);
    // float accumulator;

    // accumulator = amount;
    // for (int i = 0; i < years; i++)
    //     accumulator += ((accumulator * interestRate) / 100);
    // return accumulator;
}

int main()
{
    float amount, interestRate1, interestRate2;
    int years1, years2;

    cout << "Enter the amount to be invested: ";
    cin >> amount;
    cout << "======" << endl;
    cout << "BANK A" << endl;
    cout << "======" << endl;
    cout << "Enter the interest rate: ";
    cin >> interestRate1;
    cout << "How many years will the amount be invested? ";
    cin >> years1;
    cout << "======" << endl;
    cout << "BANK B" << endl;
    cout << "======" << endl;
    cout << "Enter the interest rate: ";
    cin >> interestRate2;
    cout << "How many years will the amount be invested? ";
    cin >> years2;
    cout << "======" << endl;
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "After " << years1 << " years, R " << amount << " at " << interestRate1 << "% will yield R " << compoundInterest(years1, amount, interestRate1) << endl;
    cout << "After " << years2 << " years, R " << amount << " at " << interestRate2 << "% will yield R " << compoundInterest(years2, amount, interestRate2) << endl;
    return 0;
}