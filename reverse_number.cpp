#include<bits/stdc++.h>
using namespace std;

int reverseNumber(int n) {
    int reverseNum = 0;

    while(n > 0) {
        int remainder = n % 10;
        n = n / 10;

        reverseNum = (reverseNum * 10) + remainder;
    }

    return reverseNum;
}

int main () {
    int n = 7789;
    int result = reverseNumber(n);

    cout << result;
    return 0;
}