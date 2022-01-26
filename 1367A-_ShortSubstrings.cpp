#include<bits/stdc++.h>

using namespace std;

int main () {
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int l = s.length();
		// cout << l << "\n";
		cout << s[0];
		for (int i = 1; i < l; ++i)
		{
			if (s[i] == s[i+1])
			{
				cout << s[i];
			}

		}
		cout << "\n";
		// cout << s[l] << "\n";
	}
	return 0;
}