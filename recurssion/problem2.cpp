// Print linearly from 1 to n

#include<bits/stdc++.h>
using namespace std;

int i = 1;
int n;

void printLinearly(int i , int n) {
    if(i > n) return;
    cout << i << endl;
    printLinearly(i + 1, n);
}

int main () {
    cin >> n;
    printLinearly(i, n);

    return 0;
}