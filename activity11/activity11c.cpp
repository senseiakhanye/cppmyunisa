#include <iostream>

using namespace std;

int main()
{
    int x, y;

    cout << "Enter a positive integer : ";
    cin >> y;
    x = 2;
    while (x != y && y % x != 0)
    {
        // if (y % x == 0)
        //     cout << y << " is not prime" << endl;
        x++;
    }
    if (x == y)
        cout << y << " is prime!" << endl;
    else
        cout << y << " is NOT prime!" << endl;
    return 0;
}