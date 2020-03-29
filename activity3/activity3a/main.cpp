#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    num1 = num2 = 0;
    cout << "Enter two number :";
    cin >> num1;
    cin >> num2;
    cout << "The quotient of " << num1 << " and " << num2 << " is " << num1 / num2 << endl;
    return 0;
}