// Print name 5 times using recurssion

#include<bits/stdc++.h>
using namespace std;

int i = 0;
int n = 5;
string name ="saalim";

void printName(int i, int n) {
    if(i >= 5) return;
    cout << "name is: " << name << endl;
    printName(i + 1, n);
}

int main () {
    printName(i, n);
    
    return 0;
}