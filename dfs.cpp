#include<bits/stdc++.h>
using namespace std;
const int N=1e5+2;

void dfs(int u,vector<int>adj[],vector<bool>&vis){
    vis[u]=true;
    cout<<u<<" ";
    vector<int>::iterator it;
    for(it=adj[u].begin();it!=adj[u].end();it++){
        if(!vis[*it])
            dfs(*it,adj,vis);
    }

}

int main(){
    vector<int>adj[N];
    int n,e;
    cin>>n>>e;
    for(int i=0;i<e;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<bool>vis(n+1,false);
    dfs(1,adj,vis);
    cout<<endl;
    return 0;
}
