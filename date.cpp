#include <bits/stdc++.h>
using namespace std;

/** s-out
2020, 11
Sun Mon Tue Wed Thu Fri Sat
1   2   3   4   5   6   7   
8   9   10  11  12  13  14  
15  16  17  18  19  20  21  
22  23  24  25  26  27  28  
29  30
*/

int diffDays(int start_month, int start_date, int end_month, int end_date) {
  int days[12] = {0,31,59,90,120,151,181,212,243,273,304,334};
  int start, end;
  start = days[start_month - 1] + start_date;
  end = days[end_month - 1] + end_date;
  return end - start;
}

string getDayOfWeek2020(int month, int day) {
  /** Jan 1 of 2020 is Wednesday */
  string dates[7] = {"Tue","Wed","Thu","Fri","Sat","Sun","Mon"};
  int daysLeap[12] = {0,31,60,91,121,152,182,213,244,274,305,335};
  int target = daysLeap[month - 1] + day;
  return dates[target % 7];
}

void printCalendar2020(int month) {
  /** Jan 1 of 2020 is Wednesday */
  string dates[7] = {"Tue","Wed","Thu","Fri","Sat","Sun","Mon"};
  int daysLeap[12] = {1,32,61,92,122,153,183,214,245,275,306,336};
  int daysMonth[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
  int dateFirst = daysLeap[month - 1] % 7;
  int numPadding = (dateFirst + 2) % 7;

  string daysHeader = "Sun Mon Tue Wed Thu Fri Sat";
  cout << endl;
  cout << "2020" << ", " << month << endl;
  cout << daysHeader << endl;
  for (int j = 0; j < numPadding; j++) {
    cout << "    ";
  }
  for (int i = 1; i < daysMonth[month-1]+1; i++) {
    if (i < 10) {
      cout << i << "   ";
    } else {
      cout << i << "  ";
    }

    if ((numPadding+i) % 7 == 0) {
      cout << endl;
    }
  }
  cout << endl;
}

int main() {
  int diff = diffDays(5,6,6,9); // May 5 ~ June 9
  cout << diff << endl;
  string day = getDayOfWeek2020(6,9); // June 9
  cout << day << endl;
  printCalendar2020(11); // November, 2020
}
