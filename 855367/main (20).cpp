#include <iostream>
using namespace std;
int main() {
  int a;
  int b;
  cin >> a;
  int h[100000] = {0};
  for(int i = 0; i < a; i++){
    cin >> h[i];
  }
  cin >> b;
  int c;
  if ((h[b] - h[b - 1]) > (h[b + 1] - h[b])){
    for(int j = b; j > -1; j--){
      c = b;
      if(h[j] > h[j - 1]){
        c--;
      
      } else {
        break;
        
      }
      }
      cout << c - 1;
    }
    else if((h[b] - h[b - 1]) < (h[b + 1] - h[b])){
      for(int k = b; b < a; k++){
        c = b;
        if(h[k] > h[k + 1]){
        c++;
      } else {
        break;
        
      }
      }
      cout << c + 1;
    }
}   
