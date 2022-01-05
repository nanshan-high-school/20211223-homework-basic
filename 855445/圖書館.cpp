#include <iostream>
using namespace std;
int main() {
  int n , s = 0 , b;
  cin >> n;
  int t[2000] = {0};
  for (int num = 2000 ; num > -1 ; num--){
    t[num] = -1;
  }
  int a[2000] = {0};
  for (int num = 2000 ; num > -1 ; num--){
    a[num] = -1;
  }
  for (int i = 0 ; i < n ; i++){
    cin >> b >> a[i] ;
    t[b] = b;
    if (a[i] > 100){
      s += (a[i] - 100)*5; 
    }
  for (int i = 0 ; i < 2000 ; i++)
    if (t[i] > -1){
      cout << t[i] ;
    }
  }
  cout << s;
} 