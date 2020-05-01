#include <iostream>

using namespace std;

int main()
{
    int guess, randValue, difference, bestGuessDifference, bestGuess;

    srand(time(0));
    randValue = rand() % 100;
    bestGuessDifference = 10;
    bestGuess = 0;
    cout << "Guess the secret number!" << endl;
    cout << " - Enter each guess." << endl;
    cout << " - When there are no more guesses, enter 0" << endl;
    cout << "Enter the first guess (0 to exit) : ";
    cin >> guess;
    while (guess != 0 && guess != randValue)
    {
        difference = abs((guess - randValue));
        if (difference <= 10 && difference < bestGuessDifference)
        {
            bestGuessDifference = difference;
            bestGuess = guess;
            cout << "This is the best guess so far." << endl;
        }
        cout << "Enter next guess (0 to exit) : ";
        cin >> guess;
    }
    cout << "The secret number was : " << randValue << endl;
    cout << "Your best guess was : " << bestGuess << endl;
    return 0;
}