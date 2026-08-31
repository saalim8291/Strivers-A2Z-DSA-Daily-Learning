// Ask user to enter marks and print the corresponding grade.

/*
A school has following rules for grading system:
Below 25 - F
25 to 44 - E
45 to 49 - D
50 to 59 - C
60 to 79 - B
80 to 100 - A
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
  int marks;
  cin >> marks;

  if(marks < 25) {
    cout << "F";
  } else if (marks <=44) {
    cout << "E";
  } else if (marks <= 49) {
    cout << "D";
  } else if (marks <= 59) {
    cout << "C";
  } else if(marks <= 79) {
    cout << "B";
  } else if(marks <= 100) {
    cout << "A";
  }

  return 0;
}