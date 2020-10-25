// PP0602A.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

int main()
{
    int tests = 0,nums = 0,x = 0;
    std::vector<int> first,second,third;

    std::cin >> tests;

    for (int i = 0; i < tests; ++i)
    {
        std::cin >> nums;
        for (int y = 0; y < nums; ++y)
        {
            std::cin >> x;
            first.push_back(x);
        }

        for (int p = 1; p < first.size(); p += 2)
            second.push_back(first[p]);        
        
        for (int p = 0; p < first.size(); p += 2)
            third.push_back(first[p]);

        for (auto c : second)
            std::cout << c << ' ';        
        
        for (auto w : third)
            std::cout << w << ' ';

        std::cout << '\n';
        first.clear();
        second.clear();
        third.clear();
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
