// Reverse the array

#include<bits/stdc++.h>
using namespace std;

void revereArray(int index, int arr[], int n) {
    if(index >= n/2) return;
    swap(arr[index], arr[n-index-1]);
    revereArray(index + 1, arr, n);
}

int main () {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    revereArray(0, arr, n);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}