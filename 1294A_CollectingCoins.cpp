#include<bits/stdc++.h>

using namespace std;

int main () {
	int t;
	cin >> t;
	while(t--)
	{
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		if (((a + b + c + d) % 3) == 0)
		{
			cout << "YES\n";
		}
		else
		{
			cout << "NO\n";
		}
	}
	return 0;
}