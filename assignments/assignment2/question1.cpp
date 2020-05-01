#include <iostream>

using namespace std;

void getData(float & weight, float & height)
{
    cout << "CALCULATE YOU BMI" << endl;
    cout << "=================" << endl;
    cout << "Enter weight (kg): ";
    cin >> weight;
    cout << "Enter height (m): ";
    cin >> height;
}

float calcBMI(float weight, float height)
{
    return weight / (height * height);
}

void displayFitnessResults(float bmi)
{
    const float UNDERWEIGHT = 18.5;
    const float HEALTY_START = 15.5;
    const float HEALTHY_END = 24.9;
    const float OVERWEIGHT_START = 25.0;
    const float OVERWEIGHT_END = 29.9;
    const float OBESE = 30;

    cout << "============================" << endl;
    if (bmi < UNDERWEIGHT)
        cout << "Your BMI is (" << bmi << ") you are underweight" << endl;
    else if (bmi >= HEALTY_START && bmi <= HEALTHY_END)
        cout << "Your BMI is (" << bmi << ") you are healthy" << endl;
    else if (bmi >= OVERWEIGHT_START && bmi <= OVERWEIGHT_END)
        cout << "Your BMI is (" << bmi << ") you are overweight" << endl;
    else if (bmi >= OBESE)
        cout << "Your BMI is (" << bmi << ") you are obese" << endl;
    cout << "=============================" << endl;
}

int main()
{
    float pWeight, pHeight, pBMI;

    getData(pWeight, pHeight);
    pBMI = calcBMI(pWeight, pHeight);
    displayFitnessResults(pBMI);
    return 0;
}