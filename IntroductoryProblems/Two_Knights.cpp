/*
    Problem : https://cses.fi/problemset/task/1072

    * you dont have to calculate the whole C(n,r) formula, you have to solve simplified version of it.
        calculating factorials twice is pointless, just do the deduction and then solve.
        like taking 2 things from n will be = n(n-1)/2; similarly taking p things from n will be
        n (n-1) (n-2)...p times / p!;
    * Using recursive functions for factorials is not a good option always.
    * Now to select the 2 positon to place knights in k*k (say =p) is (by using combination formula) : p (p-1)
        /(2!(=which is 2 ofc));
    * After getting all the combinations we have to remove the ones in which knights attack each other.
    * in a 2x3 or 3x2 grid a knight can attack other knight at 2 places.
    * number of 2*3 grids in nxn in horizontal will be (n-1)(n-2) and same for vertical 3x2 grids
    * so in total for nxn we got 4(n-1)(n-2) ways in which knights can attack each other.

*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    for (int i = 1; i != n+1; ++i)
    {
        int64_t a = i * i;
        a = (a * (a - 1)) / 2;
        if (i > 2)
        {
            a = a - ((i - 1) * (i - 2) * 4);
            cout << a << "\n";
        }
        else
            cout << a << "\n";
    }
}