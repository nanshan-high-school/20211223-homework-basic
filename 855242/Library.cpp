#include <iostream>
using namespace std;

int main() {
  int N = 0;
  cout << "N:";
  cin >> N;
  int arr[2001] = {0};
  
  for (int i = 0; i < N; i++) {
    int S;
    int D;
    cout << "S" << i + 1 << ", D" << i + 1 << ":";
    cin >> S >> D;

    arr[S] = D;
  }
  
  int mon = 0;

  for (int i = 0; i <= 2000; i++) {
    if (arr[i] > 100) {
      mon += (arr[i] - 100) * 5;
      cout << i << " ";
    }
  }
  
  cout << "\n" << mon;
}
