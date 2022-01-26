#include<bits/stdc++.h>
using namespace std;
int main(void){
	int y;
	cin >> y;
	while(1){
		y = y + 1;
		int a = y / 1000;
		// cout << a;
		int b = y / 100 % 10;
		// cout << b;
		int c = y / 10 % 10;
		// cout << c;
		int d = y % 10;
		// cout << d;
		if (a != b && a != c && a != d && b != c && b != d && c != d)
		{
			break;
		}
	}
	cout << y;
}