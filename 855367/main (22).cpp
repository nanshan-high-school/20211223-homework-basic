#include <iostream>
using namespace std;
int main() {
  int a;
  cin >> a;
  int h[1000] = {0};
  int w[1000] = {0};
  int s = 0;
  int max = 1000000;
  for(int i = 0; i < a; i++){
    cin >> h[i];
  }
  for(int j = 0; j < a; j++){
    cin >> w[j];
  }
  for(int k = 0; k < a; k++){
    if((w[k] * h[k]) <  max){
      s = k;
      max = w[k] * h[k];
    }
  }
  cout << h[s] << " " << w[s];
} 