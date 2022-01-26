#include <bits/stdc++.h>

using namespace std;

int main(){
	long t, x, y, n, i;
	cin >> t;
	while(t--)
	{
		cin >> x >> y >> n;
		cout << (n - y) / x * x + y << "\n";
	}
	return 0;
}