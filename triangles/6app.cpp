int main()
{
	int rombs, height;
	std::cin >> rombs >> height;

	for (int level = 1; level <= height; level++)
	{
		for (int i = 0; i < rombs; i++)
		{
			for (int k = 0; k <= height-level; k++)
				std::cout << ' ';
			std::cout << '*';
			for (int k = 0; k <= (2 * level) - 2; k++)
				std::cout << ' ';
			std::cout << '*';
			for (int k = 0; k <= height-level; k++)
				std::cout << ' ';
		}
		std::cout << std::endl;
	}
	for (int level = height; level > 0; level--)
	{
		for (int i = 0; i < rombs; i++)
		{
			for (int k = 0; k <= height - level; k++)
				std::cout << ' ';
			std::cout << '*';
			for (int k = 0; k <= (2 * level) - 2; k++)
				std::cout << ' ';
			std::cout << '*';
			for (int k = 0; k <= height - level; k++)
				std::cout << ' ';
		}
		std::cout << std::endl;
	}
}
