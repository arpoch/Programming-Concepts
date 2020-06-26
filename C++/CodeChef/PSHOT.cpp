#include <iostream>
#include <string.h>
using std::cin;
using std::cout;

int main()
{
    u_int16_t tcase{0}, scoreA{0}, leftA{0}, scoreB{0}, leftB{0};
    u_int32_t shots{0};
    std::string goals;
    cin >> tcase;
    while (tcase--)
    {
        cin >> shots >> goals;
        scoreA = {0};
        scoreB = {0};
        leftB = 0;
        leftA = 0;
        uint16_t i{0};
        for (i = 0; i < (goals.length()); i++)
        { //Even A
            if ((scoreA > scoreB + (shots - leftB)) || (scoreB > scoreA + (shots - leftA)))
            {
                break;
            }
            if ((i % 2) == 0)
            {
                if (goals.at(i) == '1')
                    scoreA++;
                //i++;
                leftA++;
            }
            else if ((i % 2))
            {
                if (goals.at(i) == '1')
                    scoreB++;
                //i++;
                leftB++;
            }
        }
        cout << i << '\n';
    }

    return 0;
}