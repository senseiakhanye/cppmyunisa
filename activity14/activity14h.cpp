#include <iostream>

using namespace std;

int main()
{
    int num, digits;

    cout << "Enter a number : ";
    cin >> num;
    digits = 1;
    do
    {
        num = num / 10;
        if (num > 0)
            digits += 1;
    } while (num > 0);
    cout << "Number of digits : " << digits << endl;
    return 0;
}