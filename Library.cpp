#include <iostream>
using namespace std;
int main() {
    int type ;
    cin >> type;
    int book[type] , day[type] ,  save[type] , money = 0;

    for (int i = 0 ; i < type ; i++){
      book[i] = 0;
      day[i] = 0;
      save[i] = 0;
    }

    for (int i = 0 ; i < type ; i++){
      cin >> book[i] >> day[i];

      if (day[i] > 100){
        money += (day[i] - 100)*5 ;
        save[i] = book[i];
        }
    }

    int temp;
    for (int i = 0 ; i < type ; i++){
      for (int j = 0 ; j < type ; j++){

        if(save[j] > save[i]){
          temp = save[j];
          save[j] = save[i];
          save[i] = temp;
            }
        }
    }
    for (int i = 0 ; i < type ; i++ ){
      if (save[i] > 0){
          cout << save[i] << " ";
        }
    }
    cout << money ;
}