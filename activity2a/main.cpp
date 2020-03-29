#include <iostream>

using namespace std;

int main()
{
    int prod = 1;
    for (int i = 1; i <= 5; i++) 
    {
        prod *= i;
    }
    cout << "The product of 1 to 5 is " << prod << endl;
    cout << 1 - (2 + 3* 4) / 5 << endl;
    cout << "(i) " << (80 / 5) + (70 / 6) << endl;
    cout << "(ii) " << (-5 + -4) - -3 << endl;
    cout << "(iii) " << (6 * 7) / (8 * 9) << endl;
    cout << "(iv) " << 1 - 2 + (3 / (4 * 5)) << endl;
    cout << "(v) " << (-1 + 23) / (-4 + 56) << endl;
    return 0;
}