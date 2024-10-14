#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int left[], int right[], int n_left, int n_right) {
    int i = 0, j = 0, k = 0;
 
    while (i < n_left && j < n_right) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        }
        else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }
 
    while (i < n_left) {
        arr[k] = left[i];
        i++;
        k++;
    }
 
    while (j < n_right) {
        arr[k] = right[j];
        j++;
        k++;
    }
}
 

void mergeSort(int arr[], int n) {
    if (n < 2) {
        return;
    }
 
    int mid = n / 2;
    int left[mid], right[n - mid];
 
    for (int i = 0; i < mid; i++) {
        left[i] = arr[i];
    }
 
    for (int i = mid; i < n; i++) {
        right[i - mid] = arr[i];
    }
 
    mergeSort(left, mid);
    mergeSort(right, n - mid);
	merge(arr, left, right, mid, n - mid);
}
 
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
 
int main() {
    int t;
    cin >> t;
    while(t--){
    	int a;
    	cin >> a;
    	int arr[a];
    	for(int i=0;i<a;i++) cin >> arr[i];
		int n = sizeof(arr) / sizeof(arr[0]);
		mergeSort(arr, n);
		printArray(arr, n);
	}
 
    return 0;
}
