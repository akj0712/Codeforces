#include<bits/stdc++.h>

using namespace std;

int main () {
	int t;
	cin >> t;
	while(t--){
		long long a, b, dis = 0, count = 0;
		cin >> a >> b;
		if (a == b)
		{
			count = 0;
			// cout << 0 << "\n";
			// continue;
		}
		else if (a < b)
		{
			dis = b - a;
			count++;
			if (dis % 2 != 1)
			{
				count++;
			}
		}
		else if (a > b)
		{
			dis = a - b;
			count++;
			if (dis % 2 != 0)
			{
				count++;
			}
		}
		cout << count << "\n";
	}


	return 0;
}