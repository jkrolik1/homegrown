#include <iostream>
#include <vector>

int main()
{
    std::vector<std::vector<int>> numbers;
    std::vector<int> z;
    int tests = 0, amount = 0, nearestIndex = 0, num = 0;
    double avg = 0.00, sum = 0, nearestDif = 0;

    std::cin >> tests;

    for (int i = 0; i < tests; ++i)
    {
        std::cin >> amount;
        for (int j = 0; j < amount; ++j)
        {
            std::cin >> num;
            z.emplace_back(num);
        }
        numbers.emplace_back(z);
        z.clear();
    }

    for (int i = 0; i < numbers.size(); ++i)
    {
        z = numbers[i];
        for (int j = 0; j < z.size(); ++j)
            sum += z[j];
        avg = sum / z.size();
        sum = 0;
        nearestIndex = 0;
        nearestDif = abs(avg - z[nearestIndex]);
        for (int j = 0; j < z.size(); ++j)
        {
            if (nearestDif > abs(avg - z[j]))
            {
                nearestIndex = j;
                nearestDif = abs(avg - z[nearestIndex]);
            }
        }
        std::cout << z[nearestIndex] << '\n';
        nearestIndex = nearestDif = avg = 0;
    }
}