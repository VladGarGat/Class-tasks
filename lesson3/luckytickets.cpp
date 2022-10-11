#include <iostream>
int main()
{
	int n, k = 1, result = 0, even = 0, odd = 0;
	std::cout << "Enter 6-digit n: ";
	std::cin >> n;
	for (int i = 1; n / k != 0; i++)
	{
		result = (n % (10 * k)) / (1 * k);
		k *= 10;
		if (i % 2 == 0) even += result;
		else odd += result;
	}
	std::cout << "\n The sum of evens: " << even << "  The sum of odds: " << odd << std::endl;
	if (odd == even) std::cout << "You're lucky!";
}
