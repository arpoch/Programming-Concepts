#include <iostream>

int main()
{
    uint16_t tcase{0};
    std::cin >> tcase;
    uint64_t n{0}, r{0};
    while (tcase--)
    {
        std::cin >> n >> r;
        if (r < n)
            std::cout << ((r + 1) * r / 2) << '\n';
        else
            std::cout << ((n + 1) * n / 2) - (n - 1) << '\n';
        //if (r == n)
        //ans++;
        //std::cout << ans << '\n';
    }

    return 0;
}