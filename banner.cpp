#include <bits/stdc++.h>
using namespace std;

/** s-in
 * C
 */

/** s-out
  XXXXX   
 XX   XX  
xx        
xx        
xx        
 XX   XX  
  XXXXX   
 */

/** s-in
 * CI
 */

/** s-out
  XXXXX   XXXXXXXXX  
 XX   XX  XXXXXXXXX  
xx           XXX     
xx           XXX     
xx           XXX     
 XX   XX  XXXXXXXXX  
  XXXXX   XXXXXXXXX  
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
  const int NUM_LINES = 7;

  array<array<string, 9>, NUM_LINES> data_c{{
    {"3","2","b","5","X","1","b"},
    {"4","1","b","2","X","3","b","2","X"},
    {"2","2","x","6","b"},
    {"2","2","x","6","b"},
    {"2","2","x","6","b"},
    {"4","1","b","2","X","3","b","2","X"},
    {"3","2","b","5","X","1","b"}}};
  array<array<string, 9>, NUM_LINES> data_i{{
    {"1","9","X"},
    {"1","9","X"},
    {"3","3","b","3","X","3","b"},
    {"3","3","b","3","X","3","b"},
    {"3","3","b","3","X","3","b"},
    {"1","9","X"},
    {"1","9","X"}}};

  map<char, array<array<string, 9>, NUM_LINES>*> map;
  map['C'] = &data_c;
  map['I'] = &data_i;

  array<string, NUM_LINES> result = {"","","","","","",""};
  for(unsigned int i = 0; i < format.length(); i++) {
    array<array<string, 9>, NUM_LINES> target_data = *map[format[i]];
    for(int j = 0; j < NUM_LINES; j++) {
      int num_patterns = stoi(target_data[j][0]);
      string text;
      for(int k = 0; k < num_patterns; k++) {
        int num_repeat = stoi(target_data[j][k*2+1]);
        string target_char = target_data[j][k*2+2];
        for (int l = 0; l < num_repeat; l++) {
          if (target_char == "b") {
            text += " ";
          } else {
            text += target_char;
          }
        }
      }
      result[j] += text + "  ";
    }
  }

  for(int m = 0; m < NUM_LINES; m++) {
    cout << result[m] << endl;
  }
}