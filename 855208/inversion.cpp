#include <iostream>
#include <string>
using namespace std;

string Reverse(string str);

int main() {
  bool isReverse = false;
  int reverseIndex = 0;

  string cypherText = "";
  string plainText = "";
  
  cin >> cypherText;

  plainText.resize(cypherText.length(), '\0');

  for(int i = 0; i < cypherText.length(); i++) {
    if(cypherText[i] == '+') {
      isReverse = false;
    } else if(cypherText[i] == '-') {
      isReverse = true;
      reverseIndex = i;
    } else {
      if(isReverse) {
        plainText.insert(reverseIndex, 1, cypherText[i]);
      } else {
        plainText[i] = cypherText[i];
      }
    }
  }

  cout << plainText;
}