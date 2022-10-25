// Сортировка чисел относительно заданного: слева - меньше, либо равно этого числа, справа - строго больше этого числа
#include <iostream>
void FillRandToGrand(int*, short);
void RefSortVersionTwo(int*, int, int);
int main()
{
	std::cout << "Enter the length of an array: "; int n;  std::cin >> n;
	int* arr = new int[n];

	FillRandToGrand(arr, n);
	std::cout << "Enter num for comparing: "; int ref;  std::cin >> ref;
	RefSortVersionTwo(arr, ref, n);
	std::cout << std::endl;
	for (int i = 0; i < n; i++) std::cout << arr[i] << " : ";

}
void FillRandToGrand(int* arr, short n)
{
	srand(time(0));
	for (int i = 0; i < n; i++) {
		arr[i] = 1 + rand() % 100;
		std::cout << arr[i] << " : ";
	}
}
void RefSortVersionTwo(int* arr, int ref, int n)
{
	int k = n - 1;
	for (int i = 0; (i < k); i++)
	{
		if (arr[i] > ref)
		{
			int temp;
			for (; arr[k] > ref; k--) if (k - 1 == i) break;
			temp = arr[k]; arr[k] = arr[i]; arr[i] = temp; k--;
			
		}
		for (int i = 0; i < n; i++) std::cout << arr[i] << " : ";
		std::cout << "  after " << i << " iteration\n";
	}
}
