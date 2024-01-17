#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void DisplayNums(vector<int> &dynArr)
{
    for_each(dynArr.begin(), dynArr.end(), [](int elem)
             { cout << elem << " "; });
    cout << endl;
    return;
}

int main()
{
    vector<int> myNums;
    myNums.push_back(1);
    myNums.push_back(2);
    myNums.push_back(3);
    myNums.push_back(4);
    myNums.push_back(5);

    DisplayNums(myNums);
    cout << "Sorting them in descending order" << endl;
    sort(myNums.begin(), myNums.end(), [](int n1, int n2)
         { return n1 > n2; });
    DisplayNums(myNums);
    return 0;
}
