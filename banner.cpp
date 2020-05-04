#include <bits/stdc++.h>
using namespace std;

/** s-in
 * 3
 * 3 1 9 X
 * 3 3 3 b 3 X 3 b
 * 3 1 9 X
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
  int num_inputs;
  cin >> num_inputs;
  
  for (int i = 0; i < num_inputs; i++) {
    int num_lines, num_patterns;
    cin >> num_lines >> num_patterns;
    string text;
    for (int j = 0; j < num_patterns; j++) {
      int num_chars;
      string letter;
      cin >> num_chars >> letter;
      for (int k = 0; k < num_chars; k++) {
        if (letter == "b") {
          text += " ";
        } else {
          text += letter;
        }
      }
    }
    for (int l = 0; l < num_lines; l++) {
      cout << text << endl;
    }
  }
}