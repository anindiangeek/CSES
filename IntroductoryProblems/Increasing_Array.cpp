/*
    Problem: https://cses.fi/problemset/task/1094/
    author : anindiangeek
    Learnings:
            * We do not need to store it in an arry
            * We can just track the max element till now and it will work fine.,
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
        int n = 0;
        cin >> n;
        int64_t a[n], count = 0;
        for (auto &x : a)
            cin >> x;
        for (int i = 1; i < n; i++)
        {
            if (a[i] - a[i - 1] < 0)
            {
                count += abs(a[i] - a[i - 1]);
                a[i] = a[i - 1];
            }
        }
       cout << count << endl;
    */
   // Better approach.
    int n = 0;
    cin >> n;
    int64_t a = 0, m = 0, ans = 0;
    while (n--)
    {
        cin >> a;
        m = max(m, a);
        ans += m - a;
    }
    cout << ans << endl;
}