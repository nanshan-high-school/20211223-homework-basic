#include <iostream>
using namespace std;

int main() {
  string Sen = "";
  cout << "Inversion:";
  cin >> Sen;
  Sen += '+';

  string outsen = "";
  string turn = "";
  int minus = 0;
  int time = 0;

  for (int i = 0; i < Sen.length(); i++) {
    if (Sen[i] == '-' && time == 0) {
      minus = i;
      time ++;
      continue;
    }

    if (Sen[minus] == '-') {
      if (Sen[i] == '+' || i == sizeof(Sen) - 1) {
        minus = 0;
        time = 0;

        for (int j = turn.length(); j > 0; j--) {
          outsen += turn[j - 1];
        }
        turn = "";
        continue;

      } else if (Sen[i] == '-' && time != 0) {
        minus = i;

        for (int j = turn.length(); j > 0; j--) {
          outsen += turn[j - 1];
        }
        turn = "";

      } else {
        turn += Sen[i];
        continue;
      }

    } else {
      if (Sen[i] == '+') {
        continue;
      }
      outsen += Sen[i];
    }
  }
  
  cout << outsen;
}
