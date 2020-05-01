#include <iostream>

using namespace std;

int largestNumber(int num1, int num2, int num3)
{
    if (num1 > num2)
    {
        if (num1 > num3)
            return num1;
    }
    if (num2 > num3)
        return num2;
    return num3;
}

int main()
{
    int num1, num2, num3;

    cout << "Enter 3 numbers: ";
    cin >> num1 >> num2 >> num3;
    cout << "Largest number: " << largestNumber(num1, num2, num3) << endl;
    return 0;
}