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
    //4-5
    double c{0.0}, d{0.0};
    cin >> c >> d;
    double small_value = min(c, d);
    double large_value = max(c, d);
    cout << "the smaller value is: " << small_value << '\n';
    cout << "the larger value is: " << large_value << '\n';
    if (large_value - small_value < 1.0 / 100)
    {
        cout << "the numbers are almost equal\n";
    }
    return 0;
}