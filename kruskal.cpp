#include<bits/stdc++.h>
using namespace std;
const int N=1e5+6;
vector<int>par(N);
vector<int>sz(N);

int find_set(int v){
    if(v==par[v])
        return v;
    return par[v]=find_set(par[v]);
}

void union_set(int u,int v){
    int a=find_set(u);
    int b=find_set(v);
    if(a!=b){
        if(sz[a]<sz[b])
            swap(a,b);
        par[b]=a;
        sz[a]+=sz[b];
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<N;i++){
        par[i]=i;
        sz[i]=1;
    }
    vector<vector<int>>edges;
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        edges.push_back({w,u,v});
    }
    sort(edges.begin(),edges.end());
    int cost=0;
    for(auto i: edges){
        int u=i[1];
        int v=i[2];
        int w=i[0];
        int x=find_set(u);
        int y=find_set(v);
        if(x==y)
            continue;
        else{
            cost+=w;
            union_set(u,v);
        }
    }
    cout<<cost<<endl;
    return 0;
}
