#include<bits/stdc++.h>

using namespace std;

int main(void){

	string s,t;
	cin >> s;

	transform(s.begin(), s.end(), s.begin(), ::tolower);

	int l = s.size();

	for (int i = 0; i < l; ++i)
	{
		 if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
		 {
		 	continue;
		 }
		 else
		 {
		 	t += ".";
		 	t += s[i];
		 }
	}

	cout << t << "\n";

	return 0;
}