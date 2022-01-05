#include <iostream>
using namespace std;

int main() {
  int width = 0;
  int length = 0;
  cout << "Width, Length:";
  cin >> width >> length;

  int arr[width][length];
  for (int i = 0; i < width; i++) {
    for (int j = 0; j < length; j++) {
      arr[i][j] = 0;
      cin >> arr[i][j];
    }
  }

  int newarr[width][length];
  for (int i = 0; i < width; i++) {
    for (int j = 0; j < length; j++) {
      newarr[i][j] = 0;
    }
  }

  for (int i = 0; i < width; i++) {
    for (int j = 0; j < length; j++) {
      int ESWN = 4;
      
      if (arr[i][j] == 0) {
        if (arr[i + 1][j] == 0 || i == width - 1) {
          ESWN --;
        }
        if (arr[i - 1][j] == 0 || i == 0) {
          ESWN --;
        }
        if (arr[i][j + 1] == 0 || j == length - 1) {
          ESWN --;
        }
        if (arr[i][j - 1] == 0 || j == 0) {
          ESWN --;
        }

        if (ESWN == 0) {
          continue;
        }

        if ((i == 0 && j != length - 1) || (i == 0 && j != 0)) {
          newarr[i][j] = (arr[i + 1][j] + arr[i][j + 1] + arr[i][j - 1]) / ESWN;

        } else if ((i == width - 1 && j != length - 1) || (i == width - 1 && j != 0)) {
          newarr[i][j] = (arr[i - 1][j] + arr[i][j + 1] + arr[i][j - 1]) / ESWN;

        } else if ((i != 0 && j == length - 1) || (i != width && j == length - 1)) {
          newarr[i][j] = (arr[i + 1][j] + arr[i - 1][j] + arr[i][j - 1]) / ESWN;

        } else if ((i != 0 && j == 0) || (i != width - 1 && j == 0)) {
          newarr[i][j] = (arr[i + 1][j] + arr[i - 1][j] + arr[i][j + 1]) / ESWN;

        } else if (i == 0 && j == length - 1) {
          newarr[i][j] = (arr[i + 1][j] + arr[i][j - 1]) / ESWN;

        } else if (i == 0 && j == 0) {
          newarr[i][j] = (arr[i + 1][j] + arr[i][j + 1]) / ESWN;

        } else if (i == width  - 1 && j == length - 1) {
          newarr[i][j] = (arr[i - 1][j] + arr[i][j - 1]) / ESWN;

        } else if (i == width - 1 && j == 0) {
          newarr[i][j] = (arr[i - 1][j] + arr[i][j + 1]) / ESWN;

        } else {
          newarr[i][j] = (arr[i + 1][j] + arr[i - 1][j] + arr[i][j + 1] + arr[i][j - 1]) / ESWN;
          
        }
        
      } else {
        newarr[i][j] = arr[i][j];
      }
    }
  }

  for (int i = 0; i < width; i++) {
    for (int j = 0; j < length; j++) {
      cout << newarr[i][j] << " ";
    }
    cout << "\n";
  }
} 
