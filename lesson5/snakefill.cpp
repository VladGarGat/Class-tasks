#include <iostream>
int main()
{
	const int A = 5, B = 4;
	int arr[A][B]{};


	// Заполняем массив по возрастанию 1 2 3 4 5 ... arr[A*B]
	for (int i = 0; i < A; i++)
	{
		for (int j = 0, k = B*i; j < B; j++, k++)
			arr[i][j] = k;
	}


	// Заполняем массив змейкой
	for (int i = 0; i < A; i++)
	{
		if (i % 2 == 0) for (int j = 0, k = B * i; j < B; j++, k++) arr[i][j] = k;
		else for (int j = B-1, k = B*i; j >= 0; j--, k++) arr[i][j] = k;
	}
}
