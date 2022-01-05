#include <iostream>
#include <string>
using namespace std;

int main() {
    string word, ans = "";                                    //a+b--dc ; 
    cin >> word;
    int temp; //知道何時要回正轉

    for (int i = 0; i < word.size(); i++) {                // size = 7 , i = 0 ~ 6
        
        if (word[i] == '-') {                              // i = 3, 4

            temp = word.size()-1;//如果後面沒東西時         // temp = 6
            for (int j = i + 1 ; j < word.size() ; j++){   // j = 4 , 5 ; j = 4 ~ 7  , 5 ~ 7 
                if (word[j] == '+' || word[j] == '-'){ //在 j = 4 的時候撞到 - 但 i = 4 時後面沒東西又回來刷新所以 temp = word.size()-1 
                    temp = j - 1;                           // temp = 3 或 word.size()-1 
                    break;
                }
            }
            for (int j = temp; j > i; j--){            // j = 3 , i = 3 啥都沒有 ; j = 6 那時 i = 4  j = 5 ~ 6
                ans += word[j];                 // ans +=       
            }

            i = temp + 1;
        } else if (word[i] != '+'){
            ans += word[i];
        }
    }
    cout << ans;
}