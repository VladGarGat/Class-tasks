#include <iostream>
short RankLength(int);
bool Getrank(int, int);
void ToBinary(int);
int main()
{
	int a, b, temp;
	std::cout << "Enter the first int: ";
	std::cin >> a;
	std::cout << "Enter the second int: ";
	std::cin >> b;

	int biggertRank = RankLength(std::max(a, b));
	int preFinalDigit = 1 << ((biggertRank * 2) - 1);

	for (int i = 1; i <= biggertRank; i++)
	{
		temp = (Getrank(b, i)) << ((i * 2) - 2);
		preFinalDigit = preFinalDigit | temp;

		temp = (Getrank(a, i)) << ((i * 2) - 1);
		if (i == biggertRank && temp == 0)
			preFinalDigit = preFinalDigit ^ (1 << ((biggertRank * 2) - 1));
		else preFinalDigit = preFinalDigit | temp;
	}
	std::cout << "\'a\' into binary: "; ToBinary(a);
	std::cout << "\n\'b\' into binary: "; ToBinary(b);
	std::cout << "\nIntertwined number's digital representation: " << preFinalDigit << std::endl;
	std::cout << "Intertwined number's binary representation: "; ToBinary(preFinalDigit);

}
void ToBinary(int n)
{
	for (int i = RankLength(n); i > 0; i--)
	{
		if (((n >> (i - 1)) & 1) == 1) std::cout << '1';
		else std::cout << '0';
	}
}
short RankLength(int n)
{
	unsigned short ranks = 0;
	for (; n != 0; ranks++) n /= 2;
	return ranks;
}
bool Getrank(int n, int rank)
{
	int size = RankLength(n);
	n >>= (rank - 1);
	n &= 1;
	return n;
}
