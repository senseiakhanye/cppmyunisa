#include <iostream>

using namespace std;

int main()
{
    int start, end, prod;

    start = 1;
    end = 5;
    while (start <= end)
    {
        prod = start * start;
        cout << start << " square : " << prod << endl;
        start += 1;
    }
    return 0;
}