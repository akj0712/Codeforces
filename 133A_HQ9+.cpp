#include<bits/stdc++.h>

using namespace std;

int main () {
	bool flag = 0;
	int i, j;
	string s;
	cin >> s;
	int l = s.length();
	// char a[4] = {'H', 'Q', '9', '+'};
	for (int i = 0; i < l; ++i)
	{
		if (s[i] >= 33 && s[i] <= 126)
		{
			if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
			{
				flag = true;
			}
		}
	}


	if (flag)
	{
		cout << "YES" << "\n";
	}
	else
	{
		cout << "NO" << "\n";
	}

	return 0;
}