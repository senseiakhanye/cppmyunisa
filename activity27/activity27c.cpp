#include <iostream>
#include <string>

using namespace std;

int main() {
    string sentence, search, replace;
    int foundIndex;

    cout << "Enter a sentence: ";
    getline(cin, sentence, '\n');
    cout << "Enter a word to search for: ";
    getline(cin, search, '\n');
    cout << "Enter a word to replace with: ";
    getline(cin, replace, '\n');
    foundIndex = sentence.find(search);
    while (foundIndex != -1) {
        sentence.replace(foundIndex, search.size(), replace);
        foundIndex = sentence.find(search);
    }
    cout << "The new sentence is: " << sentence << endl;
    return 0;
}