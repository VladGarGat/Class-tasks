#include <iostream>
void ToBinary(int);
short RankLength(int);
int main()
{
    signed short n;
    long x;
    std::cout << "enter digit ";
    std::cin >> x;
    std::cout << "enter num of shifts ";
    std::cin >> n;
    std::cout << "\n"; ToBinary(x); std::cout << ": n into binary\n";

    int rightmask = (1 << n) - 1;
    ToBinary(rightmask); std::cout << " : rightmask\n";

    int lengthX = RankLength(x);
    int rightpart = (x & rightmask) << (lengthX - n);
    ToBinary(rightpart); std::cout << " : right mask afer & operation and zero adding\n";
    int newx = rightpart | (x >> n);

    std::cout << newx << " : final digit" << std::endl;
    ToBinary(newx); std::cout << " : initial digit after cycle shifting\n";
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
