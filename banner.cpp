#include <bits/stdc++.h>
using namespace std;

/** s-in
 * C
 */

/** s-out
 *   XXXXX
 *  XX   XX
 * XX      
 * XX
 * XX      
 *  XX   XX
 *   XXXXX
 */

/** s-in
 * I
 */

/** s-out
 * XXXXXXXXX
 * XXXXXXXXX
 *    XXX   
 *    XXX   
 *    XXX   
 * XXXXXXXXX
 * XXXXXXXXX
 */

string trim(string inputText) {
  string format = "";
  for (unsigned int i = 0; i < inputText.length(); i++){
    if (inputText[i] == 'C' || inputText[i] == 'I') {
      format += inputText[i];
    }
  }
  return format;
}

int main() {
  string input;
  cin >> input;
  string format = trim(input);
  if (format.length() == 0) {
    cout << "Input C or I";
    return 0;
  }

  array<array<string, 10>, 5> data_c{{
    {"1","3","2","b","5","X","1","b"},
    {"1","4","1","b","2","X","3","b","2","X"},
    {"3","2","2","x","6","b"},
    {"1","4","1","b","2","X","3","b","2","X"},
    {"1","3","2","b","5","X","1","b"}}};
  array<array<string, 10>, 5> data_i{{
    {"2","1","9","X"},
    {"3","3","3","b","3","X","3","b"},
    {"2","1","9","X"},
    {"0","0"},
    {"0","0"}}};

  map<char, array<array<string, 10>, 5>*> map;
  map['C'] = &data_c;
  map['I'] = &data_i;

  for(unsigned int i = 0; i < format.length(); i++) {
    array<array<string, 10>, 5> target_data = *map[format[i]];
    int S = target_data.size();
    for(int j = 0; j < S; j++) {
      int num_lines = stoi(target_data[j][0]);
      int num_patterns = stoi(target_data[j][1]);
      string text;
      for(int k = 0; k < num_patterns; k++) {
        int num_repeat = stoi(target_data[j][k*2+2]);
        string target_char = target_data[j][k*2+3];
        for (int l = 0; l < num_repeat; l++) {
          if (target_char == "b") {
            text += " ";
          } else {
            text += target_char;
          }
        }
      }
      for(int m = 0; m < num_lines; m++) {
        cout << text << endl;
      }
    }
    cout << endl;
  }
}