#include <iostream>
using namespace std;
int main() {
  int h[1000] = {0};
  int w[1000] = {0};
  int n = 0,min = 1000000,minn = -1;
  cin >> n;
  for (int i = 0;i < n;i++) {
    cin >> h[i];
    
  }
  for (int i = 0;i < n;i++) {
    cin >> w[i];
    
  }
  for (int i = 0;i < n;i++) {
    if (h[i]*w[i] < min) {
      min = h[i]*w[i];
      minn = i;


    }
  
  }
  cout << h[minn] << " " << w[minn];



}