/*
    author: anindiangeek
    Collatz conjecture
    for more explanation watch: https://www.youtube.com/watch?v=094y1Z2wpJg
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int64_t n = 0;
    cin >> n;
    while (n != 1)
    {
        cout << n << " ";
        n = (n & 1) ? ((3 * n) + 1) : (n / 2);
    }
    cout << 1;
    return 0;
}