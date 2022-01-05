#include <iostream>
using namespace std;
int main() {
  int N , T , R;
  cin >> N ;
  int X[N] ;
  for (int i = 0 ;i < N ;i++ ){
    cin >> X[i] ;
  }
  cin >> T ;
  R = T ;
  if (T==1){
    for (int i = 0 ;i < N ;i++ ){
      if (X[i] > X[i+1]){
        R = i + 2 ;
      }else{
        break;
      }
    }
  }
  if (T == N){
    for (int i = T - 1 ;i > 0 ;i-- ){
      if (X[i] > X[i-1]){
        R = i ;
      }else{
        break;
      }
    }
  }
  else if (X[T-1]-X[T-2]>X[T-1]-X[T]){
    for (int i = T - 1 ;i > 0 ;i-- ){
      if (X[i] > X[i-1]){
        R = i ;
      }else{
        break;
      }
    }
  }
  else if (X[T-1]-X[T-2]<X[T-1]-X[T]){
    for (int i = T - 1 ;i < N ;i++ ){
      if (X[i] > X[i+1]){
        R = i + 2;
      }else{
        break;
      }
    }
  }
  cout << R ;
} 