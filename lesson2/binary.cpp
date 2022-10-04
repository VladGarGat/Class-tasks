#include <iostream>
int main()
{
	int n;
	std::cin >> n;
	while (n != 0) {
		std::cout << n % 2;
		n /= 2;
	}
}
