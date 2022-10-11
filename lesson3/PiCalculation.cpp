#include <iostream>
#include <iomanip>
int main()
{
	int n, i = 0;
	double fraction = 1., fr2 = 0, eps;
	std::cout << "Enter an epsilon (0,1):  ";
	std::cin >> eps;
	for (i = 2; abs(fr2 - fraction) > eps; i++)
	{
		fr2 = fraction;
		if (i % 2 == 0)
		{
			fraction = fraction - 1. / (2. * i - 1.);
		}
		else
		{
			fraction = fraction + 1. / (2. * i - 1.);
		}
		std::cout << std::setprecision(30) << fraction * 4 << std::endl;
	}
	std::cout << std::setprecision(40) << "final result: " << fraction * 4 << std::endl;
	std::cout << " Number of iterations: " << i - 2 << std::endl;


	int r;
	std::cout << "Enter the radius of circle: ";
	std::cin >> r;
	int x = r - 1, count = 0, y = 1;
	for (int y = 1; y < r;)
	{
		if (pow(x, 2) + pow(y, 2) <= pow(r, 2))
		{
			count += x;
			y++;
		}
		else x--;
	}
	count = (count * 4) + (4 * r) + 1;
	std::cout << "Circle is " << count << std::endl;
	int sqr = (2*r) * (2*r);
	std::cout << "Square is " << sqr << std::endl;
	double pi = (count * 4.) / sqr;
	std::cout << std::setprecision(40) << "final result: " << pi;
}
