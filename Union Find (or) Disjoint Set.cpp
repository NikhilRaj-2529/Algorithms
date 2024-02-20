#include<bits/stdc++.h>
using namespace std;
#define ll long long
int FindParent(int a , vector<int>& Parent){
    if(Parent[a] == a) return a;
    return Parent[a] = FindParent(Parent[a] , Parent);
}
void Union(int x , int y , vector<int>& Parent , vector<int>& Rank){
    int px = FindParent(x,Parent);
    int py = FindParent(y,Parent);
    if(px == py){
        Parent[py] = Parent[px];
        Rank[px]++;
    }
    else if(px < py){
        Parent[py] = Parent[px];
    }
    else{
        Parent[px] = Parent[py];
    }
}
int main() {
	int n;
	cin >> n;
	vector<int> Parent(n+1);
	vector<int> Rank(n+1,0);
	for(int i = 1 ; i <= n ; i++){
	    Parent[i] = i;
	}
	int q;
	cin >> q;
	while(q--){
	    int a , b , fun;
	    cin >> fun >> a >> b;
	    if(fun == 1) Union(a,b,Parent,Rank);
	    else{
        	if(FindParent(a,Parent) == FindParent(b,Parent)){
        	    cout << "In Same Set";
        	}
        	else{
        	    cout << "Not in the Same Set";
        	}
	    }
	}
}
