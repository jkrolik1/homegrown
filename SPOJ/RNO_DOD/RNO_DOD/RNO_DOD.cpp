// RNO_DOD.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

int main()
{
    int tests = 0, sum = 0, amount = 0, num=0;
    std::vector <std::vector<int>> nums;

    std::cin >> tests;


    for (int i = 0; i < tests; ++i)
    {
        std::vector<int> x;
        std::cin >> amount;
        for (int j = 0; j < amount; ++j)
        {
            std::cin >> num;
            x.emplace_back(num);
        }
        nums.emplace_back(x);
        x.clear();
    }

    for (auto y : nums)
    {
        std::vector<int> x = y;
        for (auto t : y)
            sum += t;
        std::cout << sum << '\n';
        sum = 0;
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
