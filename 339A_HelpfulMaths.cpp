#include<bits/stdc++.h>

using namespace std;

int main () {
	int array[101], count = 0;
	string s;
	cin >> s;

	for (int i = 0; i < s.length(); ++i)
	{
		if (s[i] == '+')
		{
			continue;
		}
		else
		{
			array[count++] = s[i] - '0' ;
		}
	}
	
	// cout << count << "\n" ;
	sort(array, array+count);

	for (int i = 0; i < count; ++i)
	{
		cout << array[i];
		if (i == count - 1)
		{
			break;
		}
		else
			cout << '+' ;
	}



	return 0;
}