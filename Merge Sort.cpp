#include<bits/stdc++.h>
using namespace std;
void Merge(int *arr,int low,int mid,int high){
    int i=low;
    int j=mid+1;
    int k=low;
    int temp[high+1];
    while(i <= mid and j <= high){
        if(arr[i] < arr[j]){
            temp[k++] = arr[i++];
        }
        else{
            temp[k++] = arr[j++];
        }
    }
    while(i <= mid){
        temp[k++] = arr[i++];
    }
    while(j <= high){
        temp[k++] = arr[j++];
    }
    for(int i=low;i<=high;i++){
        arr[i] = temp[i];
    }
}
void MergeSort(int *arr,int low,int high){
    if(low>=high) return;
    int mid=low+(high-low)/2; // We Use this trick to reduce Overflow.
    MergeSort(arr,low,mid);
    MergeSort(arr,mid+1,high);
    Merge(arr,low,mid,high);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    MergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout << arr[i] <<" ";
    }
}
