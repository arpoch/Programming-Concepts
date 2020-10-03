#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

inline void keep_window_open()
{
    char ch;
    cin >> ch;
}

int main()
{

    double c{0.0};
    double small_value{0.0};
    double large_value{0.0};
    //6
    while (cin >> c)
    {
        if (small_value == 0 && large_value == 0)
        {
            small_value = c;
            large_value = c;
            cout << "First value entered\n";
        }
        else
        {
            small_value = min((c, small_value), (c, large_value));
            large_value = max((c, small_value), (c, large_value));
            cout << "the smallest so far " << small_value << "\n";
            cout << "the largest so far " << large_value << "\n";
        }
    }
    return 0;
}