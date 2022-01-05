#include <iostream>
using namespace std;

int main() {
  int N = 0;
  cout << "N:";
  cin >> N;

  int arr[N];
  for (int i = 0; i < N; i++) {
    arr[i] = 0;
    
    int X = 0;
    cout << "X" << i + 1 << ":";
    cin >> X;
    arr[i] = X;
  }

  int T;
  cout << "T:";
  cin >> T;
  int T1 = T - 1;
  
  int tim = 0;

  for (int i = 1; i < N; i++) {
    if (T1 == 0) {
      if (arr[T1 + i - 1] < arr[T1 + i]) {
        cout << T + tim;
        break;
      } else {
        tim = i;
        if (T + tim == N) {
          cout << N;
        }
        continue;
      }
    }

    if (T1 == N - 1) {
      if (arr[T1 - i + 1] < arr[T1 - i]) {
        cout << T - tim;
        break;
      } else {
        tim = i;
        if (T - tim == 1) {
          cout << "1";
        }
        continue;
      }
    }

    if (arr[T1 + 1] < arr[T1 - 1]) {
      if (arr[T1 + i - 1] < arr[T1 + i]) {
        cout << T + tim;
        break;
      } else {
        tim = i;
        continue;
      }
    }

    if (arr[T1 + 1] > arr[T1 - 1]) {
      if (arr[T1 - i + 1] < arr[T1 - i]) {
        cout << T - tim;
        break;
      } else {
        tim = i;
        continue;
      }
    }
  }
}
