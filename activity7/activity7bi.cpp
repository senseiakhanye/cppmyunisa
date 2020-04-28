#include <iostream>

using namespace std;

int main()
{
    char letter, next;

    cout << "Enter a letter : ";
    cin >> letter;
    next = letter + 1;
    cout << "The next letter is : " << next << endl;
    // The next statement will print out the integer and not the charector
    cout << "The next letter is : " << letter + 1 << endl;
    return 0;
}