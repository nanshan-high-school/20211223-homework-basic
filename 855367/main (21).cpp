#include <iostream>
using namespace std;
int main() {
  int a;
  cin >> a;
  int temp;
  int num[2000] = {0};
  int dat[2000] = {0};
  int b[2000] = {0};
  int sum = 0;
  int min = 0;
  for(int i = 0; i < a; i++){
    cin >> num[i];
    cin >> dat[i];
  }
  for(int j = 0; j < a; j++){
    if(dat[j] > 100){
      sum += (dat[j] - 100) *5;
      for(int k = 0;k < a; k++){
        b[k] = num[j];
      }
    }  
  }
  for(int i = 0 ; i < a ; i++){
  for(int j = i +1 ; j < a ; j++){
    if(num[i]> num[j]){
    temp = num[i];
    num[i] = num[j];
    num[j] = temp;
    }
  }
  for(int i = 0; i < a; i++){
    if(num[i] > 0){
      cout << num[i];
    }
  }
  cout << "\n" << sum;
} 
}
