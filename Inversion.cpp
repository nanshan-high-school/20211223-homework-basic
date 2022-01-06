#include <iostream>
#include <string>
using namespace std;

int main() {
    string word, ans = "";                                   
    cin >> word;
    int temp; //知道何時要回正轉

    for (int i = 0; i < word.size(); i++) {               
        
        if (word[i] == '-') {                              

            temp = word.size()-1;//如果後面沒東西時         
            for (int j = i + 1 ; j < word.size() ; j++){  
                if (word[j] == '+' || word[j] == '-'){ 
                    temp = j - 1;                          
                    break;
                }
            }
            for (int j = temp; j > i; j--){           
                ans += word[j];               
            }

            i = temp + 1;
        } else if (word[i] != '+'){
            ans += word[i];
        }
    }
    cout << ans;
}
