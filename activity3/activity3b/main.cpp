#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "The remainder of " << num1 << " divided by " << num2 << " is " << num1 % num2 << endl;
    cout << "The remainder of " << num1 << " divided by " << num2 << " is " << num1 - num1 / num2 * num2 << endl;
    return 0;
}