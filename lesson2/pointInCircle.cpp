#include <iostream>
#include <cmath>
int main()
{
	int r;
	std::cin >> r;
	int x = r - 1, count = 0, y = 1;
	for (int y = 1; y < r;)
	{
		if (pow(x, 2) + pow(y, 2) <= pow(r, 2))
		{
			count += x;
			y++;
		}
		else x--;
	}
	count = (count * 4) + (4 * r) + 1;
	std::cout << count;
}
