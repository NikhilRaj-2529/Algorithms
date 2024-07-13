Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order. 
This algorithm is not suitable for large data sets as its average and worst-case time complexity is quite high.

Algorithm:

Step - 1 : traverse from left and compare adjacent elements and the higher one is placed at right side. 
Step - 2 : In this way, the largest element is moved to the rightmost end at first. 
Step - 3 : This process is then continued to find the second largest and place it and so on until the data is sorted.

Time Complexity :
Best -> O(n)
Average -> O(n^2)
Worst ->  O(n^2)

Space Complexity : O(1)


#include <bits/stdc++.h>
using namespace std;
void Bubble_Sort(vector<int> &arr , int n){
    for(int i = 0 ; i < n ; i++){
        bool isswap = false;
        for(int j = i + 1 ; j < n ; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                isswap = true;
            }
        }
        if(!isswap) break;
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
	Bubble_Sort(vt , n);
	PrintArray(vt);
}
