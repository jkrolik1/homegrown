// PTROL.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

int main()
{
    int tests = 0,nums = 0,num = 0;
    std::vector<int> x;

    std::cin >> tests;

    for (int i = 0; i < tests; ++i)
    {
        std::cin >> nums;
        for (int j = 0; j < nums; ++j)
        {
            std::cin >> num;
            x.emplace_back(num);
        }

        x.emplace_back(x[0]);

        for (int z = 1; z < x.size(); ++z)
            std::cout << x[z] << ' ';

        std::cout << '\n';

        x.clear();
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
