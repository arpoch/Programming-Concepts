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

double convertor(double, string);

int main()
{
    //7-11
    double c{0.0};
    double small_value{0.0};
    double large_value{0.0};
    string unit = "";
    int total_vals = 0;
    double sum = 0.0;
    small_value = 0;
    large_value = 0;
    vector<double> track;
    while (cin >> c >> unit)
    {

        if (unit != "cm" && unit != "in" && unit != "ft" && unit != "m")
        {
            cout << "illegal unit=" << unit << '\n';
            exit(1);
        }
        if (small_value == 0 && large_value == 0)
        {
            small_value = c;
            large_value = c;
            total_vals++;
            sum += convertor(c, unit);
        }
        else
        {
            small_value = min((c, small_value), (c, large_value));
            large_value = max((c, small_value), (c, large_value));
            total_vals++;
            sum += convertor(c, unit);
        }
        track.push_back(c);
    }
    cout << "the smallest value " << small_value << "\nthe largest value " << large_value
         << "\nthe number of values " << total_vals << "\nthe sum of values " << sum << '\n';
    sort(track.begin(), track.end());
    for (double x : track)
    {
        cout << x << '\n';
    }
    return 0;
}

double convertor(double value, string unit)
{
    if (unit == "cm")
    {
        return value / 100.0;
    }
    else if (unit == "in")
    {
        return value * 2.54 / 100.0;
    }
    else if (unit == "ft")
    {
        return value * 12.0 * 2.54 / 100.0;
    }
    return value;
}