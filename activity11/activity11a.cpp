#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Enter a number between 10 and 20 : ";
    cin >> num;
    while (num < 10 || num > 20)
    {
        cout << "Enter a number between 10 and 20 : ";
        cin >> num;
    }
    return 0;
}