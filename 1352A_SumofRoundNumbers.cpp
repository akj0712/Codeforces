#include<bits/stdc++.h>

using namespace std;

int main () {
	int t;
	cin >> t;
	while(t--){
		int n, count = 1;
		cin >> n;
		int l = floor(log10(n) + 1);
		if (n <= 10)
		{
			cout << count << "\n";
			cout << n;

		}
		else if(n >10 && n == pow(10, l-1))
		{
			cout << count << "\n";
			cout << n;
		}
		else
		{
			int a = 0;
			while(n>0){
				if (n % 10 != 0)
				{
					a++;
				}
				n = n / 10;
			}
			cout << a << "\n";

		}
		cout << "\n";

	}
	return 0;
}





// 2
// 5000 9
// 1
// 7 
// 4
// 800 70 6 9000 
// 1
// 10000 
// 1
// 10 
