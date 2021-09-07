/*
	Problem : https://cses.fi/problemset/task/1070

	* a[i] = a[i-1]++ is not same as a[i]=a[i-1]+1;
	* I dont understand why? X<Doubt> ;_;
	* logic was easy but implementation was diffcult.

	* My method will not work everytime if the constraints changed to a higher n like 10^9,
	* We cannot create an array of that large size;

	* the other method to do this is prinitng all the even values witgh the difference of 2 then odd.
	* we can use multiple loops & also maintain the jumping condition such the the difference is < 2;

*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n = 0;
	scanf("%d", &n);
	if (n == 1)
		cout << 1;
	else if (n <= 3)
	{
		puts("NO SOLUTION");
	}
	else if (n == 4)
		cout << "3 1 4 2";
	else
	{
		int a[n] = {0};
		for (int i = 0; i < n; i++)
			a[i] = i + 1;
		int p = (n & 1) ? n : n - 1;
		for (int i = 0, j = 2; i <= (p / 2) - 1; i++, j++)
			swap(a[i], a[i + j]);
		for (int i = 0; i < n; i++)
			cout << a[i] << " ";
	}
	return 0;
}