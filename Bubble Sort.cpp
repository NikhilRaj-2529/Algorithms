#include<bits/stdc++.h>
using namespace std;
void BubbleSort(int *arr,int n){
    if(n==1){
        return;
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    BubbleSort(arr,n-1);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    BubbleSort(arr,n-1);
    for(int i=0;i<n;i++){
        cout << arr[i] <<" ";
    }
}


// Full Recursion
#include<bits/stdc++.h>
using namespace std;
void BubbleSort(int i,int *arr,int n){
    if(i==1) return;
    if(i==n-1){
        BubbleSort(0,arr,n-1);
        return;
    }
    if(arr[i]>arr[i+1]) swap(arr[i],arr[i+1]);
    BubbleSort(i+1,arr,n);
    return;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    BubbleSort(0,arr,n);
    for(int i=0;i<n;i++){
        cout << arr[i] <<" ";
    }
}
