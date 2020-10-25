// TRN.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

int main()
{
    int w = 0, k = 0, num = 0;
    std::vector<std::vector<int>> kol;
    std::vector<std::vector<int>> kol2;
    std::vector<int> wie;
    std::vector<int> wie2;

    std::cin >> w;
    std::cin >> k;

    for (int i = 0; i < w; ++i)
    {
        for (int j = 0; j < k; ++j)
        {
            std::cin >> num;
            wie.push_back(num);
        }
        kol.push_back(wie);
        wie.clear();
    }
    for (int v = 0; v < k; ++v)
    {
        for (int i = 0; i < kol.size(); ++i)
        {
            wie = kol[i];
            //wie2.push_back(wie[v]);
            std::cout << wie[v] << ' ';
        }
        //kol2.push_back(wie2);
        std::cout << '\n';
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
