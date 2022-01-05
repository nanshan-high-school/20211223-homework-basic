#include <iostream>
using namespace std;

int main() {
  int N;
  cout << "N:";
  cin >> N;

  int arr[2001][2] = {0};

  for (int i = 1; i <= N; i++) {
    int H;
    cout << "H" << i << ":";
    cin >> H;

    arr[i][0] = H;
  }

  for (int i = 1; i <= N; i++) {
    int W;
    cout << "W" << i << ":";
    cin >> W;

    arr[i][1] = W;
  }

  int weak = arr[1][0] * arr[1][1];
  int weaklion = 1; 
  for (int i = 0; i <= 2000; i++) {
    if (arr[i][0] * arr[i][1] == 0) {
      continue;
    }

    if ((arr[i][0] * arr[i][1]) < weak) {
      weak = arr[i][0] * arr[i][1];
      weaklion = i;
    }
  }

  cout << arr[weaklion][0] << " " << arr[weaklion][1];
}
