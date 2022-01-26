#include<bits/stdc++.h>

using namespace std;

int main () {
	int n, i;
	cin >> n;
	float a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum = sum + a[i];
	}
	// cout << sum << "\n";
	cout << fixed << setprecision(12) << sum / n ;


	return 0;
}