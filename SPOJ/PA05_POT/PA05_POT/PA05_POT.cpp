// PA05_POT.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>

int main()
{
    std::unordered_multimap<int, int> power;
    int tests = 0, a = 0, b = 0, sum=1;
    std::vector<int> results;
    std::string num = "";

    std::cin >> tests;

    if ((tests < 1) || (tests > 10))
        return 0;

    for (int i = 0; i < tests; ++i)
    {
        std::cin >> a;
        std::cin >> b;

        power.insert(std::make_pair(a,b));
    }

    for (auto f : power)
    {
        for (int i = 0; i < (f.second); ++i)
            sum *= (f.first);
        num = std::to_string(sum);
        sum = 1;
        std::cout << num[num.size()-1] << '\n';
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
