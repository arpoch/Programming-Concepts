#include <iostream>

int main()
{
    uint16_t tcase{0};
    uint32_t n{0}, mid{0};
    std::cin >> tcase;
    while (tcase--)
    {
        std::cin >> n;
        if (n % 2 == 0)
        {
            mid = n / 2;
            std::cout << mid << '\n';
        }
        else
        {
            mid = n / 2;
            std::cout << mid + 1 << '\n';
        }
    }

    return 0;
}