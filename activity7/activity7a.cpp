#include <iostream>
#include <string>

using namespace std;

int main()
{
    string surname, title, firstname;
    cout << "Title: ";
    cin >> title;
    cout << "Name: ";
    cin.get();
    // cin >> firstname;
    getline(cin, firstname, '\n');
    cout << "Surname: ";
    // cin >> surname;
    getline(cin, surname, '\n');
    cout << "Hello " << title << " " << firstname << " " << surname << endl;
    return 0;
}