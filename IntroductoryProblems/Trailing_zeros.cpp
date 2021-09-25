/*
    Problem: https://cses.fi/problemset/task/1618

    * Basic Concept is Mathematical & A little bit of observation.
    * a zero at end will be resulted by a 2 and 5.
    * we'll calculate the factors of n and the combiniations of 2 and will make the numbers of zeros.
    * but we can simply obsereve that no of 2 will be always greater than 5 so 5 is the limiting factor
    * thus we will just calcutate the 5.

*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int64_t n = 0, ans = 0;
    cin >> n;
    while (n /= 5)
        ans += n;
    cout << ans << "\n";
}