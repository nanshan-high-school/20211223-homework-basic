#include <iostream>
using namespace std;

int main() {
    int n , land_place;
    cin >> n;
    int hill[n + 1];

    for (int i = 1 ; i <= n ; i++) {
        cin >> hill[i];
    }

    cin >> land_place;

    int forword = land_place, backword = land_place;
    //前面
    for (int i = land_place ; i > 1 ; i--) {
        if (hill[i] < hill[i - 1]) {
            break;
        }
        backword--;
    }
    //後面
    for (int i = land_place ; i < n ; i++) {
        if (hill[i] < hill[i + 1]) {
            break;
        }
        forword++;
    }

    if (hill[forword] > hill[backword]) {
        cout << forword;

    } else if(hill[backword] == hill[forword]){
        cout << backword << "  " << forword;
        cout << "Are you not looking at the topic?"; //有智障沒看題目ouo//
    }

    else{
        cout << backword;
    }
}