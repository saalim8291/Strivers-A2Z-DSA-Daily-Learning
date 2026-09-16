// Print from n to 1 (use back tracking)(i-1 is not allowed)

#include<bits/stdc++.h>
using namespace std;

int n;
int i = 1;

void printSequence(int i, int n) {
    if(i > n) return;
    printSequence(i + 1, n);
    cout << i << endl;
}

int main () {
    cin >> n;
    printSequence(i, n);
    return 0;
}
