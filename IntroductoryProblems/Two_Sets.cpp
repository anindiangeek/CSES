/*
    Problem : https://cses.fi/problemset/task/1092/

    * It was easy, but prinitng them took the most time, finding the logic was easy.
    * we should check for even and odd all of them as examples beofre implimentationing.

    :: The Solution & Approach ::
    * if the sum of n terms i.e n * (n+1)/2 was even then only we can divide them in two sets.
    * the sum of individual set should be sum/2 = n(n+1)/4;
    * we will form the a set by making equal pairs in both sets.
    * we will make pair <first,n> and add to a set. if n is odd we will make first as 0 and 1 vice versa.

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int64_t n = 0;
    cin >> n;
    if (((n * (n + 1)) / 2) & 1)
        puts("NO");
    else
    {
        puts("YES");
        int64_t sum = (n * (n + 1)) / 4, i = 0, j = n;
        (n & 1) ? i = 0 : i = 1;
        vector<int64_t> s1;
        vector<int64_t> s2;
        /* First Try;
            // printing set 1;
            {
                do
                {
                    s += i + j;
                    s1.emplace_back(j--);
                    if (i)
                        s1.emplace_back(i++);
                    i++;
                } while (s != sum);
                s = 0;
                // printing set 2;
                cout << s1.size() << "\n";
                for (auto &x : s1)
                    cout << x << " ";
                cout << "\n" << n - s1.size() << "\n";
                for (int i = 1; i <= n; i++)
                {
                    if (find(s1.begin(), s1.end(), i) == s1.end())
                    {
                        cout << i << " ";
                    }
                }
                */
        // reprinting set s1 (2nd attempt)
        while (i < j)
        {
            if (i)
                s1.emplace_back(i);
            s1.emplace_back(j--);
            i++;
            if (i < j)
            {
                s2.emplace_back(i++);
                s2.emplace_back(j--);
            }
        }
        cout << s1.size() << endl;
        for (auto &x : s1)
            cout << x << " ";
        cout << endl << s2.size() << endl;
        for (auto &y : s2)
            cout << y << " ";
    }
    return 0;
}