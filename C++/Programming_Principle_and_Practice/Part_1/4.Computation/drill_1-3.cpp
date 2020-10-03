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
    int a{0}, b{0};
    //1-3
    while (cin >> a >> b) //To exit the loop enter '|'
    {
        cout << a << " " << b << '\n';
        int small_int = min(a, b);
        int large_int = max(a, b);
        if (a == b)
        {
            cout << "the numbers are equal: " << a << '\n';
        }
        cout << "the smaller value is: " << small_int << '\n';
        cout << "the larger value is: " << large_int << '\n';
    }
    return 0;
}