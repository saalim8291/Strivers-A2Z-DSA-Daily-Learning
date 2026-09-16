// Factorial of n

#include<bits/stdc++.h>
using namespace std;

int n;

int factorial(int n) {
    if(n == 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    cin >> n;
    cout << factorial(n);
    
    return 0;
}