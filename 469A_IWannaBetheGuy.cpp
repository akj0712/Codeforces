#include<bits/stdc++.h>

using namespace std;

int arr[210];

int main () {
	int m, n, o, p, sum = 0;
	cin >> m;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		cin >> p;
		arr[p] = 1; 
	}
	cin >> o;
	for (int i = 1; i <= o; ++i)
	{
		cin >> p;
		arr[p] = 1; 
	}
	for (int i = 1; i <= (n+o); ++i)
	{
		sum = sum + arr[i];
	}
	// cout << sum << "\n";
	if (sum == m)
	{
		cout << "I become the guy.\n";
	}
	else
	{
		cout << "Oh, my keyboard!\n";
	}
	return 0;
}