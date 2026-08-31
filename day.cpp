#include <bits/stdc++.h>
using namespace std;

/*
Take the day number and print the corresponding day
(Use switch case)
1 - Monday
2 - Tuesday
3 - Wednesday
4 - Thursday
5 - Friday
6 - Saturday
7 - Sunday
*/

int main() {
  int day;
  cin >> day;

  switch(day) {
    case 1:
      cout << "Monday";
      break;
    case 2:
     cout << "Tuesday";
     break;
    case 3:
      cout << "Wednesday";
      break;
    case 4:
      cout << "Thurday";
      break;
    case 5:
      cout << "Friday";
      break;
    case 6:
      cout << "Saturday";
      break;
    case 7:
      cout << "Sunday";
      break;
    default:
      cout << "Invalid check";
  }
  
  return 0;
}