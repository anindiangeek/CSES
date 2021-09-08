/*
	Problem: https://cses.fi/problemset/task/1071

	* I got the formula when x was equal to y, i.e diagonals from observation but couldn't solve the entire Q.
	* It was solveable, should have tried it by Myself longer more than a day, I could have figured it out.
	* the problem can be divided into two parts or 3 i'd say, if x>y x<y & x=y, I've solved for 3rd case Myself.
	* In the even rows we descrease L->R and odd increase and similar pattern can be seen in columns as well.
	* <amend> just realised you don't need 3 cases you can merge the equal case with anyone the two.
	* I have figured out the formula in the hard way. 
	* for (std::cin >> x; std::cin >> y >> x; std::cout << n * n - n + 1 + (n % 2 ? -1 : 1) * (y - x) << ' ')
		n = x > y ? x : y;
	* this above is a solution which I found recently for this question.

*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int64_t t;
	cin >> t;
	while (t--)
	{
		int64_t x, y;
		cin >> x >> y;
		if (x == y)
			cout << (x * y) - (x - 1) << " ";
		else if (x < y)
		{
			if (y & 1)
				cout << (y) * (y) - (x - 1) << " ";
			else
				cout << (y - 1) * (y - 1) + (x) << " ";
		}
		else if (x > y)
		{
			if (x & 1)
			{
				cout << (x - 1) * (x - 1) + (y) << " ";
			}
			else
				cout << (x * x) - (y - 1) << " ";
		}
		// int m = max(x, y);
		// int o = min(x, y);
		// if (m & 1)
		// {
		// 	cout << (m - 1) * (m - 1) + 1 << endl;
		// }
		// else
		// {
		// 	cout << m * m - (o - 1) << endl;
		// }
	}
	return 0;
}