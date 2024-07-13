#include <bits/stdc++.h>
using namespace std;
void Insertion_Sort(vector<int> &vt , int n){
    for(int i = 1 ; i < n ; i++){
        int val = vt[i];
        int j = i - 1;
        while(j >= 0 and vt[j] > val){
            vt[j + 1]  = vt[j];
            j = j - 1;
        }
        vt[j + 1] = val;
    }
}
void PrintArray(vector<int> &vt){
    for(int i = 0 ; i < vt.size() ; i++){
        cout << vt[i] << " ";
    }
}
int main() {
	// your code goes here
	int n;
	cin >> n;
	vector<int> vt(n);
	for(int i = 0 ; i < n ; i++) cin >> vt[i];
	Insertion_Sort(vt,n);
	PrintArray(vt);
}
