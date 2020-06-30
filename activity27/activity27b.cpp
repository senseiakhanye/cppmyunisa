#include <iostream>
#include <string>

using namespace std;

string arrangeString(string original) {
    if (original.substr(0, 4) == "The ") {
        tempString = original.substr(3) + ", The";
        return tempString;
    }
    return original;
}

int main() {
    string title;

    cout << "Enter title (exit to exit) : ";
    getline(cin, title, '\n');
    while (title != "exit") {
        cout << endl;
        cout << "Arranged : " << arrangeString(title) << endl;
        cout << "Enter another title (exit to exit) : ";
        getline(cin, title, '\n');
    }
}