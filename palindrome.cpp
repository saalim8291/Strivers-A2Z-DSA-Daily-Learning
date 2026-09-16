#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(int n) {
    int originalNum = n;
    int reverseNum = 0;

    while(n > 0) {
        int remainder = n % 10;
        n = n / 10;

        reverseNum = (reverseNum * 10) + remainder;
    }

    if(originalNum == reverseNum) {
        return true;
    } else {
        return false;
    }
}

int main () {
    int n = 7789;
    int result = checkPalindrome(n);

    cout << result;
    return 0;
}