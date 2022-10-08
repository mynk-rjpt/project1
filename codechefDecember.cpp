#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

string revStr(string s, int n){

    if(n < 2) return s;

    reverse(s.begin(), s.begin()+n);

    return revStr(s, n-1);
}

int main(){
#ifndef MYNK
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s, front;
        cin >> s;
        ll start = 0;
        ll end = k-1;
        bool check = 1;
        while(start <= end){
            if(check){
                front += s[start];
                start++;
            }
            else{
                front += s[end];
                end--;
            }

            if(check) check = 0;
            else check = 1;
        }

        reverse(front.begin(), front.end());
        for(int i = k; i < n; i++) front += s[i];
        cout << front << endl;

    }

    return 0;
}
