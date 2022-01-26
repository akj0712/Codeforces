#include<bits/stdc++.h>

using namespace std;

int main () {
	int a, b, n, c = 0, m = 0;
	cin >> n;
	while(n--){
		cin >> a >> b;
		c = c - a;
		// cout << c << endl;
		c = c + b;
		// cout << c << endl;
		if (c > m)
		{
			m = c;
		}
		// cout << m << endl;
	}

	cout << m << "\n" ;

	return 0;
}