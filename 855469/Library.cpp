#include <iostream>
using namespace std;
int main() {
  int N;
  cin >> N;
  int books[2][N];
  for(int i = 0; i < N; i++){
    cin >> books[0][i] >> books[1][i];
  }
                       //第0位不用排序
  for(int i = N-1; i > 0; i--){ //泡泡排序
                      //第i位不須和後一位比較
    for(int j = 0; j < i; j++){
      if(books[0][j] > books[0][j+1]){  //若前面的比後面大就交換
        int a_0 = books[0][j], a_1 = books[1][j]; //暫存
        books[0][j] = books[0][j+1], books[1][j] = books[1][j+1];
        books[0][j+1] = a_0, books[1][j+1] = a_1;
      }
    }
  }
  int money = 0, nums = 0;
  for(int i = 0; i < N; i++){
    if(books[1][i] > 100){
      cout << books[0][i] << " ";
      money += (books[1][i]-100) * 5;
      nums++;
    }
  }if(nums != 0){cout << "\n";}

  cout << money;
}
