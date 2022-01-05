#include <iostream>
using namespace std;

int main() {
  char password[100] = {'\0'};
  cout << "Password:";
  cin >> password;

  int arr[26] = {0};
  int biggest = 0;

  for (int i = 0; i < sizeof(password); i++) {
    if (password[i] == '\0') {
      break;
    }
    
    arr[int(password[i]) - 65]++;

    if (arr[int(password[i]) - 65] > biggest) {
      biggest++;
    }
  }

  for (int i = biggest; i > 0; i--) {
    for (int j = 0; j < 26; j++) {
      if (arr[j] == i) {
        cout << (char)(65 + j);
      }
    }
  }
}
