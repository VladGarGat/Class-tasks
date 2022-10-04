#include <iostream>
int main()
{
	int z;
	std::cin >> z;
	for (int i = 0; i <= z; i++)
	{
		for (int j = 0; j < i; j++)
		{
			std::cout << ' ';
		}
		for (int j = z - i; j > 0; j--)
		{
			std::cout << '*';
		}
		std::cout << "\n";
	}
}
