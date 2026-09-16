// Sum of n numbers 
// (Parameterized way)

#include<bits/stdc++.h>
using namespace std;

int n;

void printSum(int i, int sum) {
    if(i < 0) {
        cout << sum;
        return;
    }

    sum = i + sum;
    printSum(i - 1, sum);
}

int main() {
    cin >> n;
    printSum(n, 0);

    return 0;
}