#include <bits/stdc++.h>
using namespace std;

/** s-in
 * I
 */

/** s-out
 * XXXXXXXXX
 * XXXXXXXXX
 * XXXXXXXXX
 *    XXX   
 *    XXX   
 *    XXX   
 * XXXXXXXXX
 * XXXXXXXXX
 * XXXXXXXXX
 */

int main() {
  string input;
  cin >> input;
  if (input != "I") {
    return 0;
  }
  string data_i[3][8] = {{"3","1","9","X"},
                  {"3","3","3","b","3","X","3","b"},
                  {"3","1","9","X"}};
  
  for (int i = 0; i < 3; i++) {
    string item[8] = data_i[i];
    int num_lines = stoi(item[0]);
    int num_patterns = stoi(item[1]);
    string text;
    for (int j = 0; j < num_patterns; j++) {
      int num_chars = stoi(item[j*2+2]);
      string c = item[j*2+3];
      for (int k = 0; k < num_chars; k++) {
        if (c == "b") {
          text += " ";
        } else {
          text += c;
        }
      }
    }
    for (int l = 0; l < num_lines; l++) {
      cout << text << endl;
    }
  }
}