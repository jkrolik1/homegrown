#include <iostream>
#include <vector>
#include <tuple>
#include <math.h>

void PRZEDSZK();
std::tuple<bool, int> PRZEDSZK_ifMatch(std::vector<int>, std::vector<int>);
void PRZEDSZK_2();
void ETI06F1();
double roundX(double);
void EUCGAME();

int main()
{
	
}

void EUCGAME()
{
	int tests;
	std::cin >> tests;

	int a, b;

	while (tests)
	{
		std::cin >> a; 
		std::cin >> b;

		while (1)
		{
			if (a < b)
				b -= a;
			else if (a > b)
				a -= b;
			else
			{
				std::cout << a + b << '\n';
				tests--;
				break;
			}
		}
	}
}
double roundX(double x)
{
	return round(x * 100) / 100;
}
void ETI06F1()
{
	double r, d;

	std::cin >> r;
	std::cin >> d;

	std::cout.setf(std::ios::fixed);
	std::cout << roundX((r * r - (d * d / 4))* atan(1) * 4);
}
void PRZEDSZK_2()
{
	int tests = 0;
	std::cin >> tests;

	int a, b, c;
	std::vector<int> aV, bV;
	bool end = 0;

	while (tests)
	{
		aV.clear();
		bV.clear();
		end = 0;
		std::cin >> a;
		std::cin >> b;

		if (a < b)
		{
			c = a;
			a = b + a - c;
			b = c;
		}

		// b is smaller

		aV.push_back(a);
		bV.push_back(b);

		while (1)
		{
			if (aV[aV.size() - 1] < bV[bV.size() - 1])
			{
				aV.push_back(a + aV[aV.size() - 1]);
				for (auto aE : aV)
				{
					for (auto bE : bV)
					{
						if (aE == bE) {
							std::cout << aE << '\n';
							end = 1;
							break;
						}
					}
					if (end)
						break;
				}
				if (end)
					break;
				else
					continue;
			}

			bV.push_back(b + bV[bV.size() - 1]);

			for (auto bE : bV)
			{
				for (auto aE : aV)
				{
					if (aE == bE) {
						std::cout << aE << '\n';
						end = 1;
						break;
					}
				}
				if (end)
					break;
			}
			if (end)
				break;
		}
		tests--;
	}
}
std::tuple<bool, int> PRZEDSZK_ifMatch(std::vector<int> aV, std::vector<int> bV)
{
	for (auto aEl : aV)
	{
		for (auto bEl : bV)
		{
			if (aEl == bEl)
				return std::make_tuple(1, aEl);
		}
	}
	return std::make_tuple(0, 0);
}
void PRZEDSZK()
{
	int tests = 0;
	std::cin >> tests;

	int a, b, five = 5, fiveTemp = 0, c = 1;
	std::vector<int> aV, bV;

	while (tests)
	{
		std::cin >> a;
		std::cin >> b;

		while (1)
		{
			while (aV.size() < five)
			{
				aV.emplace_back(a * c);
				bV.emplace_back(b * c);
				c += 1;
			}

			five += 5;
			c = 1;

			if (std::get<0>(PRZEDSZK_ifMatch(aV, bV)))
			{
				std::cout << std::get<1>(PRZEDSZK_ifMatch(aV, bV)) << '\n';
				aV.clear();
				bV.clear();
				break;
			}
		}


		tests--;
	}
}
