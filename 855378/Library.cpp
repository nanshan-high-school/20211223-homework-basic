#include <iostream>
using namespace std;
int main() {
  int bnum[2000] = {0};
  int d[2000] = {0};
  int ovd[2000] = {0};
  int novd[2000] = {0};
  int num,minn = 0,x = 1,sum = 0;
  cin >> num;
  for (int i = 0;i < num;i++) {
    cin >> bnum[i];
    cin >> d[i];    
  }
  for (int i = 0;i < num;i++) {
    if (d[i] > 100) {
      sum += (d[i]-100)*5;
      ovd[i] = bnum[i];
    }
  }
  for (int i = 0;i < num;i++) {
    novd[ovd[i]] = ovd[i];
  }
  for (int i = 0;i < 2000;i++) {
    if(novd[i] != 0) {
      cout << novd[i] << " ";
    }
  }

  if (sum == 0) {
    cout << "0";
  } else {
    cout << "\n" << sum;


}
 
}
