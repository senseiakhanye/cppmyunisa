#include <iostream>

using namespace std;

int main()
{
    int num1, num2;

    cout << "Enter two integers : ";
    cin >> num1 >> num2;
    
    if (num1 != 0 && num2 % num1 == 0)
        cout << num1 << " is a factor of " << num2 << endl;
    else
        cout << num1 << " is NOT a factor of "  << num2 << endl;
    return 0;
}