#include<bits/stdc++.h>

using namespace std;

int main () {
	int n, count = 0;
	cin >> n;
	int a[2*n];
	for (int i = 0; i < 2*n; ++i)
	{
		cin >> a[i];
	}
	for (int i = 0; i < 2*n-1; i = i+2)
	{
		if ((a[i]+2) <= a[i+1])
		{
			count++;
		}
	}
	cout << count << "\n";

	return 0;
}