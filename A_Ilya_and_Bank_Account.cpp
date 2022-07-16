#include <bits/stdc++.h>
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define fastread           \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0);
#define INF 1000000000000000003
typedef signed short int ss;
typedef unsigned short int us;
typedef signed int si;
typedef unsigned int ui;
typedef signed long int li;
typedef unsigned long int ul;
typedef signed long long int ll;
typedef unsigned long long int ull;
typedef double dbl;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair
void solve()
{
  ll n;
  cin >> n;
  ll max = n;
  if (n / 10 > max)
    max = n / 10;
  if (n % 10 + (n / 100) * 10 > max)
    max = n % 10 + (n / 100) * 10;
  cout << max << "\n";
}
int main()
{
  fastread;
  ll T = 1;
  // cin >> T;
  while (T--)
  {
    solve();
  }
  return 0;
}