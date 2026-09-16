#include <bits/stdc++.h>
using namespace std;

int countDigits(int n) {
    int count = 0;
    
    while (n > 0) {
        n = n / 10;
        count = count + 1;
    }

    return count;
}

int main() {
    int n;
    n = 7789;

    int result = countDigits(n);
    cout << result;

    return 0;
}