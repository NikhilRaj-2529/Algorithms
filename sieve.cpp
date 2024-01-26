#include<bits/stdc++.h>
using namespace std;
void layout(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}
// Total Primes in between the Range
// Seive Main Function
void seive(vector<int> &Primes,int n){
	for(int i=2;i*i<=n;i++){
		if(Primes[i]){
			for(int j=i*i;j<n;j+=i){
				Primes[j]=0;
			}
		}
	}
}
int main(){
	int ans=0,n=10000001;// We are finding upto 1000001 Numbers for large values
	int a,b;
	cin>>a>>b;
	vector<int>Primes(n,1); // Firstly Filling with all 1
	Primes[0]=Primes[1]=0;
	seive(Primes,n); // Seive Function Call
	for(int i=a;i<=b;i++){
		ans+=Primes[i]; // If Prime it Gets 1 or 0
	}
	cout<<ans;
}
