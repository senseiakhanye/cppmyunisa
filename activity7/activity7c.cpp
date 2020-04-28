#include <iostream>
#include <string>

using namespace std;

int main()
{
    string surname, title, firstname;
    char initial;
    cout << "Title: ";
    cin >> title;
    cout << "Name: ";
    cin >> initial;
    cin.get();
    // cin >> firstname;
    getline(cin, firstname, '\n');
    cout << "Surname: ";
    // cin >> surname;
    getline(cin, surname, '\n');
    cout << "Hello " << title << " " << initial << " " << surname << endl;
    return 0;
}