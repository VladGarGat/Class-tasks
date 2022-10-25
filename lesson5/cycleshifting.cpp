#include <iostream>
int main()
{
	int n=0;
	std::cout << "Enter array's length: "; std::cin >> n;
	int* arr = new int[n];

	srand(time(0));
	for (int i = 0; i < n; i++)
	{
		arr[i] = 1 + rand() % 999;
		std::cout << arr[i] << " ; ";
	}

	int shift; bool orientation;
	std::cout << "\nEnter the number of shifts : "; std::cin >> shift;
	std::cout << "\nEnter the orientation (0=left; 1=right) : "; std::cin >> orientation;

	int* buffer = new int[shift];
	for (int i = 0; i < shift; i++)
	{
		if (orientation == 0) buffer[i] = arr[i]; // для сдвига влево
		else buffer[i] = arr[n - shift + i]; // для сдвига вправо
	}
	if (orientation == 0)
	{
		for (int i = 0; shift + i <= n; i++) arr[i] = arr[shift + i]; // смещение влево всех элементов
		for (int i = 0; i < shift; i++) arr[n - shift + i] = buffer[i]; // добавление элементов из буфера в конец массива
	}
	else
	{
		for (int i = 0; n-i >= 0; i++) arr[n - i] = arr[n - shift - i]; // смещение вправо всех элементов 
		for (int i = 0; i < shift; i++) arr[i] = buffer[i]; // Добавление в начало элементов из буфера
	}
	std::cout << std::endl;
	for (int i = 0; i < n; i++) std::cout << arr[i] << " ; "; // вывод на экран
}
