#include <iostream>
using namespace std;
int main() {
  char words[300], a[300];
  words[0] = '+';
  int words_size = 1;
  cin >> a;
  
  for(int i; a[i] != '\0'; i++){
    words[i+1] = a[i];
    words_size++;
  }
  words[words_size] = '+';
  words_size++;

  int b [words_size], b_size = 0;
  for(int i = 0; i < words_size; i++){
    if(words[i] == '+' || words[i] == '-'){
      b[b_size] = i;
      b_size++;
    }
  }

  for(int i = 0; i < b_size-1; i++){
    if(words[b[i]] == '+'){
      for(int j = b[i]+1; j < b[i+1]; j++){
        cout << words[j];
      }
    }else{
      for(int j = b[i+1]-1; j > b[i]; j--){
        cout << words[j];
      }
    }
  }
}
