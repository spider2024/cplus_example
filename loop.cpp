#include <iostream>
#include <array>
using namespace std;

inline auto arrayFor() // 建议 inline
{
    auto ints = {5, 4, 3, 2, 1};
    for (const auto &e : ints)
    {
        cout << e << "";
    }
    cout << endl;
    return;
}
// 默认值右边不能存在没有默认值的参数
// 函数定义处的 inline 会强制编译器展开函数
inline void arrayForDefault(const std::array<int, 5> &nums = {1, 2, 3, 4, 5})
{
    for (const auto &e : nums)
    {
        cout << e << ",";
    }
    cout << endl;
}

int main()
{
    if (0)
    {

        cout << "Enter a number between 0 and 4" << endl;
        int input = 0;
        cin >> input;
        switch (input)
        {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            cout << "Valid input" << endl;
        default:
            break;
        }
    }
    else
    {
        arrayFor();
        std::array<int, 5> defaultArray = {1, 2, 3};
        arrayForDefault(defaultArray);
        arrayForDefault();
    }

    int age = 30;
    int *pointsToInt = nullptr;
    pointsToInt = &age;
    cout << "pointsToInt points to age now" << endl;
    cout << "pointsToInt = " << hex << pointsToInt << endl;
    cout << "val = " << dec << *pointsToInt << endl;
    cout << "sizeof ptr: " << sizeof(pointsToInt) << endl;
}
