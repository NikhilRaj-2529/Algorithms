Selection sort is a simple and efficient sorting algorithm that works by repeatedly selecting the smallest (or largest) element from the unsorted portion of the 
list and moving it to the sorted portion of the list. 
The algorithm repeatedly selects the smallest (or largest) element from the unsorted portion of the list and swaps it with the first element of the unsorted part.
This process is repeated for the remaining unsorted portion until the entire list is sorted.

#include <bits/stdc++.h>
using namespace std;
void Selection_Sort(vector<int> &arr , int n){
    for(int i = 0 ; i < n - 1 ; i++){
        int min_idx = i;
        for(int j = i + 1 ; j < n ; j++){
            if(arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        if(min_idx != i){
            int temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
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
	Selection_Sort(vt , n);
	PrintArray(vt);
}
