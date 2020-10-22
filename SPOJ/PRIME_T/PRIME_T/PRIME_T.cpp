// PRIME_T.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

int main()
{
    int tests = 0, num = 0;
    std::vector<int> nums;
    
    std::cin >> tests;

    for (int i = 0; i < tests; ++i)
    {
        std::cin >> num;
        nums.emplace_back(num);
    }

    int i = 0;

    for (auto x : nums)
    {
        if (x <= 1)
        {
            std::cout << "NIE" << '\n';
            continue;
        }
        else
        {
            for (i = 2; i < x; ++i)
            {
                if (x % i == 0)
                {
                    std::cout << "NIE" << '\n';
                    break;
                }
            }
            if(i == x)
                std::cout << "TAK" << '\n';
        }
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
