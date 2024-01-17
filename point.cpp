#include <iostream>
using namespace std;

void disPlayArray()
{
    const int ARRAY_LEN = 3;
    int myNums[ARRAY_LEN] = {1, 2, 3};
    int *ptrNums = myNums;
    cout << "Display array using prt  syntax,operator*" << endl;
    for (int index = 0; index < ARRAY_LEN; index++)
    {
        cout << "Element " << index << " = " << *(myNums + index) << endl;
    }
    cout << "Display array using prt with array syntax,operator[]" << endl;
    for (int index = 0; index < ARRAY_LEN; index++)
    {
        cout << "Element " << index << " = " << ptrNums[index] << endl;
    }
}

int main()
{
    int daysInMonth = 30;
    // address is const
    int *const ptrDaysInMonth = &daysInMonth;
    int daysInLunarMonth = 28;
    *ptrDaysInMonth = 28;
    // ptrDaysInMonth = &daysInLunarMonth; // expression must be a modifiable lvalue

    int hoursInDay = 24;
    // data is const
    const int *ptrHour = &hoursInDay;
    int monthsInYear = 12;
    ptrHour = &monthsInYear;
    // *ptrHour = 12; //expression must be a modifiable lvalue

    // all is const
    int season = 4;
    const int *const ptrSeason = &season;
    int temp = 5;
    // not allow
    // *ptrSeason = 3;
    // ptrSeason = &temp;

    disPlayArray();
}