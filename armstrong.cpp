#include<bits/stdc++.h>
using namespace std;

bool checkarmstrongNum (int n) {
    int originalNum = n;
    int sum = 0;

    while(n > 0) {
        int remainder = n % 10;
        n = n / 10;
        sum = (remainder * remainder * remainder) + sum;
    }
    bool isArmstrongNum = sum == originalNum? true: false;
    return isArmstrongNum;
}

int main () {
    // ArmstrongNum: 153
    int n = 153;
    int result = checkarmstrongNum(n);
    cout << result;
    
    return 0;
}