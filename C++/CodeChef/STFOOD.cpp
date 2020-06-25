#include <iostream>
#include <math.h>
int main()
{
    u_int16_t tcase{0}, foods{0};
    u_int32_t max{0};
    std::cin >> tcase;
    while (tcase--)
    {
        std::cin >> foods;
        max = 0;
        while (foods--)
        {
            u_int16_t shops{0}, price{0}, people{0};
            std::cin >> shops >> price >> people;
            shops++;
            people /= shops;
            if (max < (price * ((people))))
            {
                max = (price * ((people)));
            }
        }
        std::cout << max << '\n';
    }

    return 0;
}