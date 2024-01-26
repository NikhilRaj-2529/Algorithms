#include<bits/stdc++.h>
using namespace std;
#define ll long long
void Permutations(string s,vector<int> &frq,string t){
    // Base Case
    if(t.size()==s.size()){
        cout<<t<<"\n";
        return;
    }
    // recursive Case;
    for(int i=0;i<s.size();i++){
        if(frq[i]==0){
            frq[i]=1;
            Permutations(s,frq,t+s[i]);
            frq[i]=0;
        }
    }
}
int main() {
    int n;
    cin>>n;
	string s;
	cin>>s;
	vector<int>frq(n,0);
	Permutations(s,frq,"");
}
