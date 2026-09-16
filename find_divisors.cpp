#include<bits/stdc++.h>
using namespace std;

std::vector<int> findDivisors(int n) {
    vector<int> result;

    for(int i = 1; i * i <= n; i++) {
        if(n % i == 0) {
            result.push_back(i);

            if(i != n/i) {
                result.push_back(n/i);
            }
        }
    }

    return result;
}

int main () {
    int n = 36;

    vector<int> result = findDivisors(n);

    for(int divisor: result) {
        cout << divisor << endl;
    }
    
    return 0;
}