#include<bits/stdc++.h>

using namespace std;

int main () {
	int t;
	cin >> t;
	while(t--)
	{
		int a, b, c, l;
		cin >> a >> b >> c;

		if (a > b && a > c)
		{
			l = a;
		}
		else if (b > a && b > c)
		{
			l = b;
		}
		else
		{
			l = c;
		}
		if (l > a)
		{
			cout << l-a+1 << " ";
		}
		// else
		// {
		// 	cout << 0 << " ";
		// }
		if (l > b)
		{
			cout << l-b+1 << " ";
		}
		// else
		// {
		// 	cout << 0 << " ";
		// }
		if (l > c)
		{
			cout << l-c+1 << " ";
		}
		// else
		// {
		// 	cout << 0 << " ";
		// }
		cout << "\n";
	}
	return 0;
}