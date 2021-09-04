/*
    Problem https://cses.fi/problemset/task/1083/
    Easy peasy leamon squuezy
*/
 
#include <iostream>
int main()
{
    int64_t n, sum = 0, a;
    std::cin >> n;
    while (std::cin >> a)
        sum += a;
    std::cout << (n * (n + 1) / 2) - sum;
}