#include<bits/stdc++.h>

using namespace std;

int main () {
	int n, k, i , res, sum = 0, c = 0;
	while(cin >> n >> k)
	{
		res = 240 - k;
		for (int i = 1; i <= n; ++i)
		{
			sum = sum + 5 * i;
			if (sum > res)
			{
				break;
			}
			c++;
		}
		cout << c << "\n";
	}
	return 0;
}