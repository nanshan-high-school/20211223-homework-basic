#include <iostream>
using namespace std;

int main() {
  string cypherText = "";
  string plainText = "";
  plainText.resize(100, '\0');

  cin >> cypherText;

  int offset = 65;
  int data[26] = { 0 };

  for(int i = 0; i < cypherText.length(); i++) {
    data[(int)(cypherText[i]) - offset] += 1;
  }

  int insertCount = 0;
  for(int i = 0; i < 26; i++) {
    if(data[i] != 0) {
      int index = 100 - data[i];
      char text = (char)(i + offset);
      if(plainText[index] != '\0') {
        if((int)text > (int)plainText[index]) {
          index += insertCount + 1;
        }
        plainText.insert(index, 1, text);
        insertCount++;
      } else {
        plainText[index] = text;
      }
    }
  }
  cout << plainText;
}
