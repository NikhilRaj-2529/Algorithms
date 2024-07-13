// Insertion sort is a simple sorting algorithm that works by iteratively inserting each element of an unsorted list into its correct position in a sorted portion of the list.
// Insertion sort is a simple sorting algorithm that works by building a sorted array one element at a time. It is considered an ” in-place ” sorting algorithm, meaning it doesn’t require any additional memory space beyond the original array.

// Algorithm:

// To achieve insertion sort, follow these steps:

// Step - 1 :  We have to start with second element of the array as first element in the array is assumed to be sorted.
// Step - 2 : Compare second element with the first element and check if the second element is smaller then swap them.
// Step - 3 : Move to the third element and compare it with the second element, then the first element and swap as necessary to put it in the correct position among the first three elements.
// Step - 4 : Continue this process, comparing each element with the ones before it and swapping as needed to place it in the correct position among the sorted elements.
// Step - 5 : Repeat until the entire array is sorted.


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
