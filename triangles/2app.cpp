#include <iostream>
int main() 
{
	int x;
	std::cin >> x;
	for (int i = x; i > 0; i--)
	{
		for (int j = i; j > 0; j--)
		{
			std::cout << '*';
		}
		std::cout << "\n";
	}
}
