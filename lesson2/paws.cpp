#include <iostream>
int main()
{
	int n;
	std::cout << "Enter any positive even number of paws: ";
	std::cin >> n;

	for (int k = 0; (n / 4 - k) >= 0; k++)
	{
		std::cout << (n / 4 - k) << " rabbits and ";
		if (n % 4 == 0) std::cout << 2 * k << " gooses" << std::endl;
		else std::cout << (2 * k) + 2 << " gooses" << std::endl;
	}
}
