#include <iostream>
#include <string>

using namespace std;

// Get symbol based on marks
void codeSymbol(int mark, string & symbol, char & code)
{
    if (mark >= 80 && mark <= 100)
    {
        symbol = "A";
        code = '7';
    }
    else if (mark >= 70 && mark <= 79)
    {
        symbol = "B";
        code = '6';
    }
    else if (mark >= 60 && mark <= 69)
    {
        symbol = "C";
        code = '5';
    }
    else if (mark >= 50 && mark <= 59)
    {
        symbol = "D";
        code = '4';
    }
    else if (mark >= 40 && mark <= 49)
    {
        symbol = "E";
        code = '3';
    }
    else if (mark >= 30 && mark <= 39)
    {
        symbol = "F";
        code = '2';
    }
    else
    {
        symbol = "FF";
        code = '1';
    }
}


// Award distintion, return true if mark is greater or equal to 75 otherwise false.
bool awardDistiction(int mark)
{
    return mark >= 75;
}

void studentDetails(string & sName, string & sSurname, string & sSchoolName)
{
    cout << "===========================" << endl;
    cout << "      Student Details" << endl;
    cout << "===========================" << endl;
    cout << "Student name: ";
    getline(cin, sName, '\n');
    cout << "Student surname: ";
    getline(cin, sSurname, '\n');
    cout << "School name: ";
    getline(cin, sSchoolName, '\n');
}

// Loop until a valid value is entered 0 to 100
int getValidMark(string subjectName)
{
    int mark;

    cout << "Key in your mark for " << subjectName << ": ";
    cin >> mark;
    while (mark < 0 || mark > 100)
    {
        cout << "You keyd in the incorrect mark (0 to 100) please try again" << endl;
        cout << "Enter mark for " << subjectName << ": ";
        cin >> mark;
    }
    return mark;
}

void getMarks(int & engMark, int & mathMark, int & lifeMark, int & histMark, int & compMark, int & geoMark)
{
    cout << "===============================" << endl;
    cout << "       Student Marks" << endl;
    cout << "===============================" << endl;
    engMark = getValidMark("English");
    mathMark = getValidMark("Mathematics");
    lifeMark = getValidMark("Life Orientaion");
    histMark = getValidMark("History");
    compMark = getValidMark("Computer literacy");
    geoMark = getValidMark("Geography");
}

// Check whether the student has passed according to specs, the student must pass english and at least 3 more subjects
bool passOrFail(int engMark, int mathMark, int lifeMark, int histMark, int compMark, int geoMark)
{
    int numPassed;

    if (engMark < 50)
        return false;
    numPassed = 1;
    if (mathMark >= 50)
        numPassed += 1;
    if (lifeMark >= 50)
        numPassed += 1;
    if (histMark >= 50)
        numPassed += 1;
    if (compMark >= 50)
        numPassed += 1;
    if (geoMark >= 50)
        numPassed += 1;
    return numPassed >= 4;
}

void calcAverageYearMark(int engMark, int mathMark, int lifeMark, int histMark, int compMark, int geoMark)
{
    float average;
    string symbol;
    char code;
    
    cout.setf(ios::fixed);
    cout.precision(2);
    average = float(engMark + mathMark + lifeMark + histMark + compMark + geoMark) / 6;
    codeSymbol(average, symbol, code);
    cout << "Student average : " << average << " with Symbol " << symbol << " code " << code;
    if (awardDistiction(int(average)) && passOrFail(engMark, mathMark, lifeMark, histMark, compMark, geoMark))
        cout << " with Distinction";
    cout << endl;
}

// Set the min and max at the same time, have a function to avoid many if statements in minmax. Repition.
void setMinMax(int mark, int & minMark, int & maxMark)
{
    if (minMark > mark)
        minMark = mark;
    if (maxMark < mark)
        maxMark = mark;
}

void minMax(int engMark, int mathMark, int lifeMark, int histMark, int compMark, int geoMark, int & minMark, int & maxMark)
{
    minMark = 100;
    maxMark = 0;
    setMinMax(engMark, minMark, maxMark);
    setMinMax(mathMark, minMark, maxMark);
    setMinMax(lifeMark, minMark, maxMark);
    setMinMax(histMark, minMark, maxMark);
    setMinMax(compMark, minMark, maxMark);
    setMinMax(geoMark, minMark, maxMark);
}

// Instead have a lot of if statements on diplayReport, a function to check distintion and code is done here.
void printLine(int mark, string subjectName)
{
    string symbol;
    char code;

    codeSymbol(mark, symbol, code);
    cout << subjectName << mark  << "%\t\t" << symbol << "\t\t" << code;
    if (awardDistiction(mark))
        cout << "\t\tYES";
    cout << endl;
}

void displayReport(int engMark, int mathMark, int lifeMark, int histMark, int compMark, int geoMark, string sName, string sSurname, string sSchool)
{
    cout << "==========================================================" << endl;
    cout << "                       Students Report" << endl;
    cout << "==========================================================" << endl;
    cout << endl;
    cout << "Name: " << sName << " " << sSurname << "\t\t\tSchool: " << sSchool << endl;
    cout << endl;
    cout << "subject\t\t\tMark\t\tSymbol\t\tCode\t\tDistinction" << endl;
    cout << "=======\t\t\t====\t\t======\t\t====\t\t===========" << endl;
    printLine(engMark, "English\t\t\t");
    printLine(mathMark, "Mathematics\t\t");
    printLine(lifeMark, "Life orientation\t");
    printLine(histMark, "History\t\t\t");
    printLine(compMark, "Computer Studies\t");
    printLine(geoMark, "Geography\t\t");
}

int main()
{
    string name, surname, schoolname;
    int engM, mathM, lifeM, histM, compM, geoM, min, max;

    studentDetails(name, surname, schoolname);
    getMarks(engM, mathM, lifeM, histM, compM, geoM);
    displayReport(engM, mathM, lifeM, histM, compM, geoM, name, surname, schoolname);
    cout << endl;
    calcAverageYearMark(engM, mathM, lifeM, histM, compM, geoM);
    if (passOrFail(engM, mathM, lifeM, histM, compM, geoM))
        cout << "Outcome: Passed" << endl;
    else
        cout << "Outcome: Failed" << endl;
    cout << endl;
    minMax(engM, mathM, lifeM, histM, compM, geoM, min, max);
    cout << "The lowest mark was " << min << "%" << endl;
    cout << "The highest mark was " << max << "%" << endl;
    return 0;
}