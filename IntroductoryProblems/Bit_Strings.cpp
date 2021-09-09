/*
    Problem: https://cses.fi/problemset/task/1617\

    * Be aware using compound assigment when you have to perfrom or give answer in MOD 10^9+7;

    * for each place we can have 2 things i.e either 0 or 1.
    * for n places we will have 2^n permutations possible.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int64_t n = 0, ans = 1;
    cin >> n;
    while (n--)
        ans = (ans * 2) % 1000000007;
    cout << ans;
    return 0;
}