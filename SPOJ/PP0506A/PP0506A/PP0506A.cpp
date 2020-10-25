// PP0506A.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <map>
#include <math.h> 

int main()
{
	int tests = 0, qua = 0, xP = 0, yP = 0;
	std::string name;
	std::vector<float> x,y;
	std::map<float, std::string> dis;
	std::vector<std::string> n;

	std::cin >> tests;

	for (int i = 0; i < tests; ++i)
	{
		std::cin >> qua;
		for (int j = 0; j < qua; ++j)
		{
			std::cin >> name;
			n.emplace_back(name);
			std::cin >> xP;
			std::cin >> yP;
			x.emplace_back(xP);
			y.emplace_back(yP);
		}

		for (int i = 0; i < n.size(); ++i)
			dis[sqrt(x[i] * x[i] + y[i] * y[i])] = n[i];

		int o = 0;
		for (auto t : dis)
		{
			name = t.second;
			for (int r = 0; r < n.size(); ++r)
				if (n[r] == name)
				{
					o = r;
					break;
				}

			std::cout << name << ' ';
			std::cout << x[o] << ' ';
			std::cout << y[o] << '\n';
		}

		n.clear();
		x.clear();
		y.clear();
		dis.clear();
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
