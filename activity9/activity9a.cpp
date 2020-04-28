#include <iostream>

using namespace std;

int main()
{
    const float VAT = 0.14;
    float amount, total, subTotal;

    do
    {
        cout << "Enter amount (0 to exit) : ";
        cin >> amount;
        subTotal += amount;
    } while (amount > 0);
    total = subTotal + (subTotal * VAT);
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "Total : " << total << endl;
    return 0;
}