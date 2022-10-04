#include <iostream>
int main()
{
	int y;
	std::cin >> y;
	for (int i = 1; i <= y; i++)
	{
		for (int j = y - i; j > 0; j--)
		{
			std::cout << ' ';
		}
		for (int j = 0; j < i; j++)
		{
			std::cout << '*';
		}
		std::cout << "\n";
	}	int y;
}
