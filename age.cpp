#include <bits/stdc++.h>
using namespace std;

/*
Take the age from the user and decide job eligibility
Below 18 - Not eligible for job
age >= 18 and age <= 54 - Eligible for job
age >= 55 and age <= 57 - Eligible for job, but retirement soon
age > 57 - Retirement time
*/

int main() {
  int age;
  cin >> age;

  if (age < 18) {
    cout << "Not eligible for job";
  } else if (age <= 54) {
    cout << "Eligible for job";
  } else if (age <= 57) {
    cout << "Eligible for job, but retirement soon";
  } else {
    cout << "Retirement time";
  }

  return 0;
}