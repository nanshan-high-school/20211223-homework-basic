#include <iostream>
using namespace std;
int main() {
  int a,q,z,w,s;
  cin >> a;
  int X[a];
  for (int k = 0; k < a; k++) {
    cin >> X[k];
    }
  cin >> q;
  q-=1;
  if(X[q] - X[q-1] > X[q] - X[q+1]){
      z=X[q] - X[q-1];
      s=1;
      q-=1;
    }else {
      z=X[q] - X[q+1];
      s=2;
      q+=1;
    }
    if(s==1){
      if (z > X[q-1]){
        z=q-1;
        q-=1;
    }
    }else{
      if (z > X[q+1]){
      z=q+1;
      q+=1;
    }
    }
    cout << z;
    }