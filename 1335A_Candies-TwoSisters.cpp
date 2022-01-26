#include<bits/stdc++.h>

using namespace std;

int main () {
	int t;
	cin >> t;
	while(t--)
	{
		long a;
		cin >> a;

		if (a > 2 && a % 2 != 0)
		{
			cout << a/2 << "\n";
		}
		else if (a > 2 && a % 2 == 0)
		{
			cout << a / 2 - 1 << "\n";
		}
		else
		{
			cout << 0 << "\n";
		}

	}

	return 0;
}
