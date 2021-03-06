#include "bits/stdc++.h"
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define fastread ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define INF 1000000000000000003
typedef signed short int ss;		// -10⁴ (to) 10⁴
typedef unsigned short int us;		// 00 (to) 2•10⁴
typedef signed int si;				// -10⁹ (to) 10⁹
typedef unsigned int ui;			// 00 (to) 2•10⁹
typedef signed long int li;			// -10¹² (to) 10¹²
typedef unsigned long int ul;		// 00 (to) 2•10
typedef signed long long int ll;	// -10¹⁸ (to) 10¹⁸
typedef unsigned long long int ull;	// 00 (to) 2•10¹⁸
typedef double dbl;					// (almost) 10²⁴
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair

void solve(){
	ll n, count1 = 0, count2 = 0, count3 = 0, count4 = 0, ans;
	cin >> n;
	ll arr[n];
	FOR(i, n){
		cin >> arr[i];
		if (arr[i] == 1)
			count1++;
		else if (arr[i] == 2)
			count2++;
		else if (arr[i] == 3)
			count3++;
		else
			count4++;
	}
	ans = count4 + count3 + count2/2;
	if (count3 <= count1)
		count1 = count1 - count3;
	else
		count1 = 0;

	if(count2 % 2 == 1)
	{
		ans++;
	    count1 = count1 - 2;
	}
	 if (count1 > 0)
    {
        ans = ans + (count1 + 3) / 4;
    }
	cout << ans << "\n";
}

int main()
{
	fastread;
	ll T = 1;
	// cin >> T;
	while (T--) {
		solve();
	}
	return 0;
}
