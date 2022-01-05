#include <iostream>
using namespace std;
int main() {
  int n,pos;
  int ht[30] = {0};
  cin >> n;
  for (int i = 0;i < n;i++) {
    cin >> ht[i];
  }
  cin >> pos;
  if (pos == 1) {
    while (ht[pos-1] >= ht[pos]) {
      pos++;
    }
    cout << pos;
  }else if (pos == n) {
    while (ht[pos-1] >= ht[pos-2]) {
      pos--;
    }
    cout << pos;
    }else {
      if(ht[pos-1] - ht[pos] > ht[pos-1] - ht[pos-2]) {
        while (ht[pos-1] >= ht[pos]) {
          pos++;
        }
        cout << pos;
    }else {
      while (ht[pos-1] >= ht[pos-2]) {
      pos--;
    }
    cout << pos;

    }
}
}
