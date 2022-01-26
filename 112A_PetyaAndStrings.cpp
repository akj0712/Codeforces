#include <bits/stdc++.h>

using namespace std;

int main(){
	string str1, str2;
	cin>>str1;
	cin>>str2;
	int l = str1.size();
	// cout<<l;
	// str1 = str1.lower();
	// cout<<str1;
	for (int i = 0; i < l; i++)
	{
		if (str1[i] > 96 )
		{
			str1[i] = str1[i] - 32 ;
		}

		if (str2[i] > 96 )
		{
			str2[i] = str2[i] - 32 ;
		}
	}
	// cout<<str1<<endl;
	// cout<<str2<<endl;
	for (int i = 0; i < l; i++)
	{
		if (str1 == str2)
		{
			printf("0");
			break;
		}
		if (str1[i] < str2[i])
		{
			// cout<<i<<endl;
			printf("-1");
			break;
		}
		if (str1[i] > str2[i])
		{
			// cout<<i<<endl;
			printf("1");
			break;
		}

	}
}