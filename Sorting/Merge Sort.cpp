Merge Sort
Merge sort is a sorting algorithm that follows the divide-and-conquer approach. It works by recursively dividing the input array into smaller subarrays and 
sorting those subarrays then merging them back together to obtain the sorted array.we can say that the process of merge sort is to divide the array into two halves,
sort each half, and then merge the sorted halves back together. This process is repeated until the entire array is sorted.

Time Complexity:

Best -> O(n*log n)
Average -> O(n*log n)
Worst -> O(n*log n)

Space Complexity : O(N)

#include <bits/stdc++.h>
using namespace std;
void Merge_sort(vector<int> &arr , int low , int mid , int high){
    vector<int> temp;
    int i = low , j = mid + 1;
    while(i <= mid and j <= high){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i++]);
        }
        else temp.push_back(arr[j++]);
    }
    while(i <= mid) temp.push_back(arr[i++]);
    while(j <= high) temp.push_back(arr[j++]);
    for(int i = 0 ; i < temp.size() ; i++){
        arr[low + i] = temp[i];
    }
}
void Merge(vector<int> &vt , int l , int h){
    if(l >= h) return;
    int mid = l + (h - l) / 2;
    Merge(vt,l,mid);
    Merge(vt,mid+1,h);
    Merge_sort(vt,l,mid,h);
}
void Print_Array(vector<int> &vt){
    for(auto it : vt){
        cout << it << " ";
    }
    cout << "\n";
}
int main() {
	// your code goes here
	int n;
	cin >> n;
	vector<int> vt(n);
	for(int i = 0 ; i < n ; i++) cin >> vt[i];
	Print_Array(vt);
	Merge(vt , 0 , n - 1);
	Print_Array(vt);
}
