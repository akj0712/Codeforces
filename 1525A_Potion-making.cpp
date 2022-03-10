// Since you need e liters of essence to be exactly k % of potion then we can write an equality: ee+w=k100 or k=x⋅e and 100=x⋅(e+w) for some integer x. Since we need to minimize e+w and x(e+w)=100, then we should maximize x, but both k and 100 should be divisible by x. In other words, taking x as Greatest Common Divisor of k and 100 is optimal.
// As a result e+w=100x=100gcd(k,100).

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
	ll k;
	cin >> k;
	cout << 100/__gcd(k, 100*1LL) << "\n";
}

int main()
{
	fastread;
	ll T = 1;
	cin >> T;
	while (T--) {
		solve();
	}
	return 0;
}
