// PP0501A.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int nwd(int a, int b);

int main()
{
    int tests = 0, a = 0, b = 0;

    std::cin >> tests;

    for (int i = 0; i < tests; ++i)
    {
        std::cin >> a;
        std::cin >> b;
        std::cout << nwd(a, b) << '\n';
    }

}

int nwd(int a, int b)
{
    int low = 0, high2 = 1;

    if (a >= b)
        low = b;
    else
        low = a;

    for (int i = 1; i <= low; ++i)
        if ((a % i == 0) && (b % i == 0))
            high2 = i;

    return high2;
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
