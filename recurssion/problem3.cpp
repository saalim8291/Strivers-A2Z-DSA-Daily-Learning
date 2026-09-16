// Print in reverse (from n to 1)

#include<bits/stdc++.h>
using namespace std;

int n;

void printReverseSequence(int i, int n) {
    if(i < 1) return;
    cout << i << endl;
    printReverseSequence(i - 1, n);
}

int main () {
    cin >> n;
    printReverseSequence(n, n);

    return 0;
}