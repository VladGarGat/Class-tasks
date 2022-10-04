#include <iostream>
int main()
{
	int k;
	std::cin >> k;
	for (int i = 0; i <= k; i++)
	{
		for (int j = k - i; j > 0; j--)
			std::cout << ' ';
		for (int j = 0; j < i; j++)
			std::cout << '*';
		for (int j = 1; j < i; j++)
			std::cout << '*';
		std::cout << "\n";
	}
	for (int i = 0; i <= k; i++)
	{
		for (int j = 0; j < i; j++)
			std::cout << ' ';
		for (int j = k - i; j > 0; j--)
			std::cout << '*';
		for (int j = k - i; j > 1; j--)
			std::cout << '*';
		std::cout << "\n";
	}
}
