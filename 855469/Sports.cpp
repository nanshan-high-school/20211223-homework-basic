#include <iostream>
using namespace std;
int main() {
  int N;
  cin >> N;
  int mountain[N];
  for (int i = 0; i < N; i++){
    cin >> mountain[i];
  }

  int T;
  cin >> T;
  int end = T;
  T--;
  if(T == 0){
    int i = 0;
    do{
      end = i+1;
      i++;
    }while(mountain[i-1] >= mountain[i] && i < N);
  }else if(T == N-1){
    int i = T;
    do{
      end = i+1;
      i--;
    }while(mountain[i+1] >= mountain[i] && i > -1);
  }else if(mountain[T] - mountain[T+1] > mountain[T] - mountain[T-1]){  //往右滑
    int i = T;
    do{
      end = i+1;
      i++;
    }while(mountain[i-1] >= mountain[i] && i < N);
  }else{
    int i = T;
    do{
      end = i+1;
      i--;
    }while(mountain[i+1] >= mountain[i] && i > -1);
  }

  cout << end;
}
