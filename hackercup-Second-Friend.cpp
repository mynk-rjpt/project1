#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define mem(a,x) memset(a,x,sizeof(a))
#define print(arr) for(auto &k : arr) cout << k << " "; nl;
#define case(t) cout << "Case #" << (t + 1) << ": ";
#define phnx ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(a) (a).begin(), (a).end()
#define mine(a) *min_element(all(a))
#define maxe(a) *max_element(all(a))
#define sum(a) accumulate(a.begin(),a.end(),0ll)
#define popcnt(x) __builtin_popcountll(x)
#define f(i,L,R) for (int i = L; i < R; i++)
#define fe(i,L,R) for (int i = L; i <= R; i++)
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b)  (a*b)/(gcd(a,b))
#define vl vector<ll>
#define vc vector<char>
#define pl pair<ll, ll>
#define vpl vector<pl>
#define spl set<pl>
#define vvl vector<vector<ll>>
#define vvc vector<vector<char>>
#define ff first
#define ss second
#define nl cout << "\n"
#define sorteo(v)   sort(all(v), [](ll x, ll y) { return x % 2 < y % 2; } );
#define sortoe(v)   sort(all(v), [](ll x, ll y) { return x % 2 > y % 2; } );
#define take(n,v) ll n; cin >> n; vl v(n); for(auto &v1 : v) { cin >> v1; }
#define UB(arr,x) upper_bound(all(arr),x)
#define LB(arr,x) lower_bound(all(arr),x)

/*---------------------------------------------------------------------------------------------------------------------------*/

#ifdef phnx
#define debug(x) cerr << #x<<" "; debug_it(x); cerr << "\n";
#else
#define debug(x);
#endif

void debug_it(ll t) {cerr << t;}
void debug_it(int t) {cerr << t;}
void debug_it(string t) {cerr << t;}
void debug_it(char t) {cerr << t;}
void debug_it(ld t) {cerr << t;}
void debug_it(double t) {cerr << t;}

template <class T, class V> void debug_it(pair <T, V> p);
template <class T> void debug_it(vector <T> v);
template <class T> void debug_it(set <T> v);
template <class T, class V> void debug_it(map <T, V> v);
template <class T> void debug_it(multiset <T> v);
template <class T, class V> void debug_it(pair <T, V> p) {cerr << "{"; debug_it(p.ff); cerr << ","; debug_it(p.ss); cerr << "}";}
template <class T> void debug_it(vector <T> v) {cerr << "["; for (T i : v) {debug_it(i); cerr << " ";} cerr << "]\n";}
template <class T> void debug_it(set <T> v) {cerr << "[ "; for (T i : v) {debug_it(i); cerr << " ";} cerr << "]";}
template <class T> void debug_it(multiset <T> v) {cerr << "[ "; for (T i : v) {debug_it(i); cerr << " ";} cerr << "]";}
template <class T, class V> void debug_it(map <T, V> v) {cerr << "[ "; for (auto i : v) {debug_it(i); cerr << " ";} cerr << "]";}

vector<pair<int, int>> dir = { {0, 1}, {1, 0}};
// map<pair<int, int>, char> symbols = {{{1, 0}, 'D'}, {{0, -1}, 'L'}, {{ -1, 0}, 'U'}, {{0, 1}, 'R'}};
vector<pair<int, int>> movements = {{2, -1} , {2, 1}, { -2, -1} , { -2, 1}, {1, 2} , { -1, 2}, {1, -2} , { -1, -2}};

const ll N = 2e5 + 10;
const ll md = 1e9 + 7;
const ll inf = LLONG_MAX;

ll power(ll a, ll b) {a %= md; ll res = 1; while (b > 0) {if (b & 1)res = res * a % md; a = a * a % md; b >>= 1;} return res;}
ll power_mod(ll b, ll p, ll m) {ll r = 1; while (p) {if (p & 1) r = r * b % m; b = b * b % m; p >>= 1;} return r;}
ll inverse(ll a) { return power(a, md - 2); }
void YN(bool ans) {if (ans) {cout << "YES\n";} else {cout << "NO\n";}}

/*---------------------------------------------------------------------------------------------------------------------------*/

void precompute() {

}

/*---------------------------------------------------------------------------------------------------------------------------*/

void solve(){
	ll n;
	cin >> n;
	vpl v(n);

	f(i,0,n){
		cin >> v[i].ff;
	}
	ll mx = 0;
	f(i,0,n){
		cin >> v[i].ss;
		mx = max(mx,v[i].ss);
	}

	ll pos = 0;
	f(i,0,n){
		if(v[i].ss == mx){
			pos = v[i].ff;
			break;
		}
	}
	vl x;
	f(i,0,n){
		ll sum = v[i].ff + v[i].ss;

		ll diff = abs(sum - pos);

		if(diff <= mx){

		}else{
			
		}
	}
	if(x.size() == 0){
		cout << 0;
		nl;
		return;
	}

	// debug(x);
	sort(all(x));
	ll s = x[0] + x.back();
	if(s & 1){
		cout << s / 2 << ".5";
	}else{
		cout << s;
	}
	nl;
}


/*---------------------------------------------------------------------------------------------------------------------------*/

int main() {
#ifdef phnx
	freopen("error.txt", "w", stderr);
#endif
	precompute();
	int tc = 1;
	cin >> tc;

	f(t, 0, tc) {

	// case (t);
		solve();
	}
	return 0;
}

/*---------------------------------------------------------------------------------------------------------------------------*/
