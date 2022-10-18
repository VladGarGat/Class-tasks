#include <iostream>
int main()
{
	short h1=0, m1=0, s1=0, h2=0, m2=0, s2=0;
	std::cout << "enter first hours, mins, secs :\n";
	std::cin >> h1 >> m1 >> s1;
	std::cout << "enter second hours, mins, secs :\n";
	std::cin >> h2 >> m2 >> s2;

	// convert both into secs
	int val1 = h1 * 60 * 60 + m1 * 60 + s1;
	int val2 = h2 * 60 * 60 + m2 * 60 + s2;
	int val3=0;
	if (val1 < val2) val3 = val2 - val1;
	else if (val1 > val2) val3 = (24 * 60 * 60) - (val1 - val2);

	// convert val3 into hh:mm:ss
	int h3 = val3 / (60 * 60); val3 -= h3*60*60; std::cout << "hours=" << h3 << " val3=" << val3 << std::endl;
	int m3 = val3 / 60; val3 -= m3*60; std::cout << "mins=" << m3 <<" val3=" << val3 << std::endl;
	int s3 = val3; val3 -= s3; std::cout << "sec=" << s3 << " val3=" << val3 << std::endl;
}
