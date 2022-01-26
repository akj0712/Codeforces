#include<bits/stdc++.h>

using namespace std;

int main(void)
{
	int n;
	cin >> n;
	int a[100];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; ++i)
	{
		if (a[i] == 1)
		{
			cout << "HARD";
			return 0;
		}
	}
	cout << "EASY";

}