#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3;
    float sum;
    cout << "Enter three vaules : ";
    cin >> num1 >> num2 >> num3;
    sum = float(num1 + num2 + num3) / 3;
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "Precision : " << sum << endl;
    return (0);
}