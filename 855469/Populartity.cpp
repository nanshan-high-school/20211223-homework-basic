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
        bool L = true, R = true, U = true, D = true;
        if(i == 0){U = false;
        }else if(i == R-1){D = false;}
        if(j == 0){L = false;
        }else if(j == C-1){R = false;}

        if(L){
          if(left != 0){
            a[i][j] += left;
            b++;
          }
        }
        if(R){
          if(right != 0){
            a[i][j] += right;
            b++;
          }
        }
        if(U){
          if(up != 0){
            a[i][j] += up;
            b++;
          }
        }
        if(D){
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
