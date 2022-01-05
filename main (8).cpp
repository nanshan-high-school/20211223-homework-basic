#include <iostream>
using namespace std;
int main() {
  int a=0;
  cin >> a;
  int b[2001];
  for (int c=2000 ; c>-1 ; c-- ){
    b[c] = -1;

  }
  int e;
  int f;
  int i[2001];
  for (int c=2000 ; c>-1 ; c-- ){
    i[c] = -1;
  }
  
  for (int d=0 ; d<a ; d++){
    cin >> e >> f;
    b[e]=f;
    i[e]=e;
  }
  for (int g=0; g<2001;g++){
      if (i[g]!=-1){
        cout <<  i[g] << " ";              
      }
  }
  cout <<"\n";
  int sum;
  int h;
  for (int g=2000; g>-1;g--){
      if (b[g]!=-1){
          h=(b[g]-100)*5;
          if (h>0){
              sum+=h;
          }          
      }
  }
  cout << sum;

}
