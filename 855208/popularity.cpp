#include <iostream>
#include <math.h>
using namespace std;

int main() {
  int map[9][9] = { 0 };
  int popularity[9][9] = { 0 };

  int width, height;
  cin >> height;
  cin >> width;

  for(int y = 0; y < height; y++) {
    for(int x = 0; x < width; x++) {
      cin >> map[x][y];
    }
  }

  for(int y = 0; y < height; y++) {
    for(int x = 0; x < width; x++) {
      if(map[x][y] != 0) {
        popularity[x][y] = map[x][y];
        continue;
      }
      int left = 1, right = 1, top = 1, bottom = 1;
      int p = 
        map[x + 1][y] +
        map[x - 1][y] +
        map[x][y - 1] +
        map[x][y + 1]
      ;
      
      // boader check
      if(x + 1 >= width) {
        right = 0;
        p -= map[x + 1][y];
      }
      if(x - 1 < 0) {
        left = 0;
        p -= map[x - 1][y];
      }
      if(y + 1 >= height) {
        bottom = 0;
        p -= map[x][y + 1];
      }
      if(y - 1 < 0) {
        top = 0;
        p -= map[x][y - 1];
      }

      if(left) {
        if(map[x - 1][y] <= 0){
          left = 0;
        } 
      }
      if(right) {
        if(map[x + 1][y] <= 0) {
          right = 0;
        } 
      } 
      if(top) {
        if(map[x][y + 1] <= 0) {
          top = 0;
        } 
      } 
      if(bottom) {
        if(map[x][y - 1] <= 0) {
          bottom = 0;
        } 
      } 

      int blockNear = left + right + top + bottom;
      if(blockNear != 0) {
        popularity[x][y] = floor(p / blockNear);
      }
    }
  }

  for(int y = 0; y < height; y++) {
    for(int x = 0; x < width; x++) {
      cout << popularity[x][y] << " ";
    }
    cout << endl;
  }
}
