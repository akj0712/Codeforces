#include<bits/stdc++.h>

using namespace std;

#define M 100000+10
int main () {
	int t, count = 0;
	int m[M];
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> m[i];
	}
	for (int j = 0; j < t; j++)
	{
		if (m[j] != m[j+1])
		{
			count = count + 1;
			// cout << count <<"\n";
		}
		else
		{
			count = count;
		}
	}
	cout << count;
	return 0;
}