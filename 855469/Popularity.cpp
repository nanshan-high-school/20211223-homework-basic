#include <iostream>
using namespace std;
#define up (blocks[i-1][j])
#define down (blocks[i+1][j])
#define left (blocks[i][j-1])
#define right (blocks[i][j+1])

int main() {
  int R, C;
  cin >> R >> C;
  int blocks[R][C], a[R][C];
  for(int i = 0; i < R; i++){
    for(int j = 0; j < C; j++){
      cin >> blocks[i][j];
      a[i][j] = 0;
    }
  }

  for(int i = 0; i < R; i++){
    for(int j = 0; j < C; j++){
      if(blocks[i][j] == 0){
        int b = 0;
        bool l = true, r = true, u = true, d = true;
        if(i == 0){u = false;}
        if(i == R-1){d = false;}
        if(j == 0){l = false;}
        if(j == C-1){r = false;}

        if(l){
          if(left != 0){
            a[i][j] += left;
            b++;
          }
        }
        if(r){
          if(right != 0){
            a[i][j] += right;
            b++;
          }
        }
        if(u){
          if(up != 0){
            a[i][j] += up;
            b++;
          }
        }
        if(d){
          if(down != 0){
            a[i][j] += down;
            b++;
          }
        }
        
        if(b != 0){
          a[i][j] /= b;         
        }
      }
    }
  }

  for(int i = 0; i < R; i++){
    for(int j = 0; j < C; j++){
      blocks[i][j] += a[i][j];
      cout << blocks[i][j] << " ";
    }
    cout << "\n";
  }
} 
