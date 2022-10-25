void IsAscending(int* arr, int n)
{
	if (n == 1) std::cout << "Array can't be analysed";
	else if (n == 2 && arr[0] > arr[1]) std::cout << "Array is descending";
	else if (n == 2 && arr[0] < arr[1]) std::cout << "Array is ascending";
	else if (arr[0] < arr[1] && arr[1] < arr[2]) // проверяем на возрастание и дальше
	{
		if (n == 3) std::cout << "Array is ascending";
		else
		{
			for (int i = 2; i < n - 1; i++)
			{
				if (arr[i] > arr[i + 1]) {
					std::cout << "Array isn't sorted"; break;
				}
				if (i == n - 2) {
					std::cout << "Array is ascending";
				}
			}
		}
	}
	else if (arr[0] > arr[1] && arr[1] > arr[2]) // проверяем на убывание и дальше
	{
		if (n == 3) std::cout << "Array is descending";
		else
		{
			for (int i = 2; i < n - 1; i++)
			{
				if (arr[i] < arr[i + 1]) {
					std::cout << "Array isn't sorted"; break;
				}
				if (i == n - 2) {
					std::cout << "Array is descending";
				}
			}
		}
	}
	else std::cout << "Array isn't sorted";
}
