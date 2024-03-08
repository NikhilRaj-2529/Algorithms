// Ford-Fulkerson and Edmonds-Karp

// Ford-Fulkerson -> If we do it in DFS

// Edmonds-Karp -> If we do it in BFS

#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
bool BFS(vector<vector<ll>> &Graph , int source, int sink , vector<ll> & Parent , int n){
    bool Augment_Path = true;
    vector<bool> vis(n,false);
    queue<ll> q;
    vis[source] = true;
    q.push(source);
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int v = 0 ; v < n ; v++){
            if(Graph[u][v] > 0 and !vis[v]){
                vis[v] = true;
                Parent[v] = u;
                q.push(v);
                if(v == sink){
                    return true;
                }
            }
        }
    }
    return false;
}
ll Find_Max_Flow(vector<vector<ll>> &Graph , int source , int sink , ll n){
    vector<vector<ll>> RcGraph(Graph);
    vector<ll> Parent(1001,0);
    ll Max_Flow = 0;
    int min_edge = INT_MAX;
    int v;
    while(BFS(RcGraph,source,sink,Parent,n)){
        v = sink;
        while(v != source){
            int u = Parent[v];
            if(min_edge > RcGraph[u][v]){
                min_edge = RcGraph[u][v];
            }
            v = u;
        }
        Max_Flow += min_edge;
        v = sink;
        while(v != source){
            int u = Parent[v];
            RcGraph[u][v] -= min_edge;
            v = u;
        }
    }
    return Max_Flow;
}
int main(){
    ll n , m;
    cin >> n >> m;
    vector<vector<ll>> Graph(n , vector<ll>(n,0));
    for(int i = 0 ; i < m ; i++){
        int u , v, c;
        cin >> u >> v >> c;
        Graph[u][v] = c;
    }
    int source = 0;
    int sink = 1;
    ll max_flow = Find_Max_Flow(Graph , source , sink , n);
    cout << max_flow << "\n";
}
