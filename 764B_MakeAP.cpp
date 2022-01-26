#include<bits/stdc++.h>

using namespace std;

int main () {
	int t;
	cin >> t;
	while(t--)
	{
		int a, b, c;
		cin >> a >> b >> c;
		int d = a + c;
		if ((d % 2 == 0) && ((d/2)>=b) && ((d / 2) % b == 0))
		{
			cout << "YES\n";
		}
		else{
			if (((2 * b) - c) >= a && ((2 * b) - c) % a == 0)
			{
				cout << "YES\n";
			}
			else{
				if (((2 * b) - a) >= c && ((2 * b) - a) % c ==0)
				{
					cout << "YES\n";
				}
				else{
					cout << "NO\n";
				}
			}
		}
	}
	return 0;
}

// YES
// YES
// YES
// YES
// NO
// YES
// NO
// YES
// YES
// NO
// YES
