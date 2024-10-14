#include<bits/stdc++.h>
using namespace std;
void Bubble_Sort(int arr[],int n) {
    for (int i=0;i<n-1;i++) {
        bool swapped=false;
        for (int j=0;j<n-1-i;j++) {
            if (arr[j]>arr[j+1]) {
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if (swapped==false) break;
        cout << "Buoc " << i+1 << ": ";
        for (int k=0;k<n;k++) {
            cout << arr[k] << ' ';
        }
        cout << endl;
     }
}
/* toi uu hon
void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n-1; i++)
    {
        swapped = false;
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
                swapped = true;
            }
        }
        if (swapped == false) break;
    }
}
*/
int main () {
    int n;
    cin >> n;
    int a[n];
    for (int i=0;i<n;i++) cin >> a[i];
    Bubble_Sort(a,n);
    return 0;
}
