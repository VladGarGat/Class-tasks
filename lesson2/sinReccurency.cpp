#include <iostream>
double rec(int x, int n)
{
	if (n == 0) return x;
	return sin(rec(x, n-1));
}
int main()
{
	int x, n;
	double res = 0;
	std::cin >> x >> n;
	// rec(x, n) + rec(x, n-1) + ... + rec(x, 1)
	while (n > 0)
	{
		res += rec(x, n);
		n--;
	}
	std::cout << res;
}
