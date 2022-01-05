#include <iostream>
using namespace std;
int main() {
  int N;
  cin >> N;
  int Hs[N], Ws[N], HWs[N];
  for(int i = 0; i < N; i++){
    cin >> Hs[i];
  }
  for(int i = 0; i < N; i++){
    cin >> Ws[i];
  }
  for(int i = 0; i < N; i++){
    HWs[i] = Hs[i] * Ws[i];
  }
  int least = 2000000;
  int least_index = N + 1;
  for(int i = 0; i < N; i++){
    if(HWs[i] < least){
      least_index = i;
      least = HWs[i];
    }
  }
  cout << Hs[least_index] << " " << Ws[least_index];
} 
