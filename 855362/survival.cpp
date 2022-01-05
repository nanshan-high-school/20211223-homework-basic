#include <iostream>
using namespace std;
int main() {
  int all = 0 , b = 0;
  cin >> all;
  int hw [all][2] ,nokyle[2];
  nokyle[0] = 2001;
  nokyle[1] = 2001;
  for (int i = 0 ; i < all ; i++ ){
    hw [i][0] =0;
    hw [i][1] =0;
  }
  for (int i = 0 ; i < all ; i++ ){
    cin >> hw[i][0];
    cin >> hw[i][1];
  }
  for (int i = 0 ; i < all ; i++ ){
    if (nokyle[0]*nokyle[1] > hw[i][0]*hw[i][1]){
      nokyle[0] = hw[i][0];
      nokyle[1] = hw[i][1];
    }
  }
  cout << nokyle[0] << "," << nokyle[1];
 } 