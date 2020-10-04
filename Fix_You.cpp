// Created by Aman Khandelwal
#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> pll;
typedef vector<pll> vop;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define FOR(i,a,b) for(ll i=a; i<b; i++)
#define FORR(i,a,b) for(ll i=a; i>=b; i--)
#define adb(a) for(auto ii:a) cout << ii << " "; cout << endl;
#define adp(a) for(auto ii:a) cout << ii.F << " " << ii.S << endl;
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define all(x) (x).begin(),(x).end()
#define endl "\n"
#define mem(a,b) memset(a, b, sizeof(a))
#define clr(x) memset(x, 0, sizeof(x))
#define mod 1000000007
#define PI 3.14159265358979323846
const ll MAXN = 100007;
const ll p = 1000000007;
#define MAX 10000003
#define INF INTMAX_MAX

ll power(ll a, ll b, ll m) { ll ans = 1; a = a % m; while (b) { if (b & 1) ans = (ans * a) % m; b /= 2; a = (a * a) % m; } return ans; }

ll lcm(ll a, ll b) { return (a * b) / __gcd(a, b); }

ll modInverse(ll a, ll m) { ll g = __gcd(a, m); return power(a, m - 2, m); }

bool cmp(const pll &a, const pll &b)
{
	if (a.F != b.F) {
		return a.F > b.F;
	}
	else
		return a.S < b.S;
}

int main()
{
	fastIO;
	ll t; cin >> t;

	while (t--)
	{
		ll n, m, count = 0; cin >> n >> m;
		char a[n][m];

		FOR(i, 0, n)
		{
			FOR(j, 0, m)
			cin >> a[i][j];
		}

		FOR(i, 0, n)
		{
			FOR(j, 0, m)
			{
				if (j == m - 1 && a[i][j] == 'R')
					count++;
				if (i == n - 1 && a[i][j] == 'D')
					count++;
			}
		}

		cout << count << endl;

	}
}