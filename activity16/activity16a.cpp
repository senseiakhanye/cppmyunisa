#include <iostream>

using namespace std;

int main()
{
    int maxgames, counter, tempValue, totalPayout;
    const int PAYOUT = 2;
    float averagePayout;
    char toss;

    cout << "How many times would you like to play the game: ";
    cin >> maxgames;
    tempValue = 0;
    totalPayout = 0;
    for (int i = 0; i < maxgames; i++)
    {
        counter = 0;
        tempValue = 1;
        cout << "H for heads and T for tails: ";
        do
        {
            cin >> toss;`
            if (toupper(toss) == 'H' || toupper(toss) == 'T')
                counter += 1;
        } while (toupper(toss) != 'H');
        for (int x = 0; x < counter; x++)
            tempValue *= PAYOUT;
        totalPayout += tempValue;
        cout << "Your payout is : " << tempValue << endl;
    }
    cout.setf(ios::fixed);
    cout.precision(2);
    averagePayout = totalPayout / maxgames;
    cout << "Avarage payout : R " << averagePayout << endl;
    return 0;
}