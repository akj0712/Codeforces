#include<bits/stdc++.h>

using namespace std;

int main () {
	int t;
	cin >> t;
	while(t--)
	{
		int a, b, d, e;
		long long c, count = 0;;
		cin >> a >> b >> c;
		int arr[a][b];
		for (int j = 0; j < b; ++j)
		{
			for (int i = 0; i < b; ++i)
			{
				arr[j][i] = count ++;
				if (a[j][i] == c)
				{
					d = i;
					e = j;
				}
			}
		}
		for (int i = 0; i < a; ++i)
		{
			for (int j = 0; j < b; ++j)
			{
				
			}
		}
	}
	return 0;
}