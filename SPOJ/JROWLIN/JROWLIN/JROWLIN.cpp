#include <iostream>
#include <string>
#include <cmath>
#include <math.h>
#include <iomanip>

int main()
{
    double a = 0.0, b = 0.0, c = 0.0, x = 0.0;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    x = (c - b);

    if ((x == 0) && (a == 0))
        std::cout << "NWR";
    else if ((x != 0) && (a == 0))
        std::cout << "BR";
    else
    {
        x = x / a;
        std::cout << std::fixed << std::setprecision(2) << round(100 * x) / 100;
    }

}