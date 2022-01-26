#include<bits/stdc++.h>

using namespace std;
const int N = 50+3;
char arr[N][N];
int main () {
	int t;
	cin >> t;
	while(t--)
	{
		int a, b, c, d, i, j,  count = 0;
		bool flag = false;
		cin >> a >> b >> c >> d;
		for (int i = 1; i <= a; ++i)
		{
			for (int j = 1; j <= b; ++j)
			{
				cin >> arr[i][j] ;
			}
		}
		if (arr[c][d] == 'B')
		{
			count = 0;
			cout << 0 << "\n";
			break;
		}

		for ( int j = 1; j <= d ; ++j)
		{
			if (arr[c][j] == 'B')
			{
				count = 1;
				cout << 1 << "\n";
				break;
			}
		}
		for ( int i = 1 ; i <= b; ++i)
		{
			if (arr[i][d] == 'B')
			{
				count = 1;
				cout << 1 << "\n";
				break;
			}
		}
		for (int i = 1; i <= a; ++i)
		{
			for (int j = 1; j <= b; ++j)
			{
				if (i == j && arr[i][j] =='B')
				{
				 	count = 2;
				 	cout << 2 << "\n";
					break;
				} 
			}
		}
		

		// if (count == 0)
		// {
		// 	cout << 0 << "\n";
		// }
		// else if (count == 1)
		// {
		// 	cout << 1 << "\n";
		// }

		// else if (count == 2)
		// {
		// 	cout << 2 << "\n";
		// }
		// else
		// {
		// 	cout << -1 << "\n";
		// }


	}
	return 0;
}
// for (int i = 1; i <= a; ++i)
		// {
		// 	for (int j = 1; j <= b; ++j)
		// 	{
		// 		cout << arr[i][j] ;
		// 	}
		// 	cout << "\n";
		// }