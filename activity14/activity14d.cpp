#include <iostream>

using namespace std;

int main()
{
    const float MAX_POPULAION = 1000000;
    const float INCREMENT = 0.10;
    float population;
    int years;

    cout << "Enter the population: ";
    cin >> population;
    years = 0;
    while (population <= MAX_POPULAION)
    {
        population += (population * INCREMENT);
        years += 1;
    }
    cout << "It will take " << years << " years to reach " << MAX_POPULAION << endl;
    return 0;
}