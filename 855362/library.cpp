#include <iostream>
using namespace std;
int main() {
  int all = 0 , b = 0;
  cin >> all;
  int num [all] , day [all] , out [all] , out2 = 0;
  for (int i = 0 ; i < all ; i++ ){
    num [i] =0;
    day [i] =0;
    out [i] =0;
  }
  for (int i = 0 ; i < all ; i++ ){
    cin >> num[i];
    cin >> day[i];
    if (day[i] > 100){
      out[i] = num[i];
      out2 += (day[i] - 100)*5 ;
    }
  }
  for (int i = 0 ; i < all ; i++ ){//排序
    for (int j = 0 ; j < all ; j++ ){
      if(out[j] > out[i]){
        b = out[j];
        out[j] = out[i];
        out[i] = b;

      }
    }
  }
  for (int i = 0 ; i < all ; i++ ){
    if (out[i] > 0){
      cout << out[i] <<",";
    }
  }
  cout << out2 ;
 } 