#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
int nCr(int n, int r){
    int num = 1;
    for(int i = n - r + 1 ; i <= n ; i++)
    {
        num *= i;   
    }
    for(int i = 1 ; i <= r; i++){
        num /= i;
    }
    return num;
}
int pow(int a, int b){
    int ans = 1;
    while(b){
        if(b&1){
            ans *= a;
            ans %= mod;
        }
        a *= a;
        a %= mod;
        b >>= 1;
    }
    return ans;
}
