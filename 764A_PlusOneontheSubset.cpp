#include<bits/stdc++.h>

using namespace std;

int main () {
	int t, n;
	int arr[50];
	cin >> t;

	while(t--)
	{
		cin >> n;

		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i];
		}

		sort(arr, arr+n);
		
		cout << arr[n-1]-arr[0] << "\n";
	}
	
	return 0;
}