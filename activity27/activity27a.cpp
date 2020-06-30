#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string wrd) {
    bool isSame = true;
    int len = wrd.length();
    int index, rindex;

    index = 0;
    rindex = len - 1;
    while (isSame && index < len && rindex >= index) {
        isSame = wrd[index] == wrd[rindex];
        index += 1;
        rindex -= 1;
    }
    return isSame;
}

int main() {
    string wrd;

    cout << "Enter a string to check if it is a palindrome (exit to exit :) ): ";
    cin >> wrd;
    while (wrd[0] != 'x') {
        if (isPalindrome(wrd)) {
            cout << "Is Palindrome" << endl;
        } else {
            cout << "It is NOT Palindrome" << endl;
        }
        cout << "Enter another string to check if it is a palindrome (exit to exit :) ): ";
        cin >> wrd;
    }
    cout << endl;
}