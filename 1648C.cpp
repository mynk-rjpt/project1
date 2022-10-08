#include<bits/stdc++.h>
using namespace std;

#define ll long long
ll mod = 1000000007;

void pre(){}

void solve(){
    int n,m;

    cin >> n >> m;

    vector<multiset<int>> cx(100001,multiset<int>());
    vector<multiset<int>> cy(100001,multiset<int>());

    vector<vector<int>> a(n+1,vector<int>(m+1));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> a[i][j];
            cx[a[i][j]].insert(i);
            cy[a[i][j]].insert(j);
        }
    }
    ll ans = 0;
    for(int i=1;i<=100000;i++){
        int size = cx[i].size();
        if(!size) continue;

        int cnt = size;

        for(auto &a : cx[i]){
            ans +=  a*1LL*(size-cnt);
            ans -= a*1LL*(cnt-1);
            cnt--;
        }
        cnt=size;
        for(auto &a : cy[i]){
            ans +=  a*1LL*(size-cnt);
            ans -= a*1LL*(cnt-1);
            cnt--;
        }
    }

    cout << ans;
}

int main()
{
   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   #endif

   int t=1;
//    cin>>t;
   
   pre();

   while(t--)
   {
      solve();
   }
   
   cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
   return 0;
}
