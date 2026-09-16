// Sum of n numbers 
// (Functional way)

#include<bits/stdc++.h>
using namespace std;

int n;

int sum(int n) {
    if(n == 0) return 0;
    return n + sum(n-1);
}

int main() {
    cin >> n;
    cout << sum(n);
    
    return 0;
}