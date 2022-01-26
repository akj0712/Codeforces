#include<bits/stdc++.h>

using namespace std;

int main () {
	int t;
	cin >> t;
	while(t--)
	{
		int n, i, j;
		cin >> n;
		int arr[n];
		for (int i = 1; i <= n; ++i)
		{
			cin >> arr[i];
		}
		int sum = arr[1] + arr[2];
		// cout << sum << "\n";
		int pos;
		bool flag = false;
		for (int i = 3; i <= n; i++)
		{
			if (arr[i] >= sum)
			{
				pos = i;
				flag = true;
				break;
			}
		}
		if (flag)
		{
			cout << 1 << " " << 2 << " " << pos << "\n";
		}
		else
		{
			cout << -1 << "\n";
		}
	}
	return 0;
}