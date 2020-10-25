// PA05_POT_.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <math.h>
#include <string>

int main()
{
    int tests = 0, num = 0;
    std::vector<int> a, b;
    std::string n;

    std::cin >> tests;

    for (int i = 0; i < tests; ++i)
    {
        std::cin >> num;
        a.emplace_back(num);

        std::cin >> num;
        b.emplace_back(num);
    }

    for (int i = 0; i < a.size(); ++i)
    {
        num = std::pow(a[i],b[i]);
        n = std::to_string(num);
        n = n[n.size() - 1];
        std::cout << n;
        n = "";
        num = 0;
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
