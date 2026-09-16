// Print from 1 to n (use back tracking)(i+1 is not allowed)

#include<bits/stdc++.h>
using namespace std;

int n;

void printSequence (int i, int n) {
    if(i < 1) return;
    printSequence(i - 1, n);
    cout << i << endl;
}

int main () {
    cin >> n;
    printSequence(n, n);
    return 0;
}