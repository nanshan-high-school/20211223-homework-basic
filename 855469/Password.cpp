#include <iostream>
using namespace std;
int main() {
  int times[26]{0};
  string password;
  cin >> password;
  int N = password.size();
  
  for(int i = 0; i < password.size(); i++){
    if(times[int(password[i]) - 65] != 0){
      N -= 1;
    }
    times[int(password[i]) - 65] += 1;
  }

  for(int i = 0; i < N; i++){
    int max = -1, max_index = -1;
    for(int j = 0; j < 26; j++){
      if(times[j] > max){
        max = times[j];
        max_index = j;
      }
    }
    cout << char(max_index + 65);
    times[max_index] = 0;
  }
} 
