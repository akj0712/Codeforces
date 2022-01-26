#include<bits/stdc++.h>

using namespace std;

int main () {
	int n, h, count = 0;
	cin >> n >> h;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		if (a[i] > h)
		{
			count++;
		}
	}
	// cout << count;
	cout << (n - count) + (2 * count);

	return 0;
}