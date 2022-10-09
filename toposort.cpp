#include<bits/stdc++.h>
using namespace std;
const int N=1e5+2;

int main(){
    int v,e;
    cin>>v>>e;
    vector<vector<int>>adj(v+1);
    int k;
    cin>>k;
    vector<int>indeg(v+1,0);
    for(int i=0;i<e;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        indeg[v]++;
    }
    queue<int>q;
    for(int i=1;i<=v;i++){
        if(indeg[i]==0){
            q.push(i);
        }
    }

    int count=0;
    while(!q.empty()){
        count++;
        int courses=min(int(q.size()),k);
        for(int i=0;i<courses;i++){
            int x=q.front();
            q.pop();
            for(auto i: adj[x]){
                indeg[i]--;
                if(indeg[i]==0)
                    q.push(i);
            }
        }
    }
    cout<<count<<endl;
    /*
    while(!q.empty()){
        int x=q.front();
        q.pop();
        cout<<x<<" ";
        
        for(auto i: adj[x]){
            indeg[i]--;
            if(indeg[i]==0)
                q.push(i);
        }
        
    }
    cout<<endl;
    */
    return 0;
}
