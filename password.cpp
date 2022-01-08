#include <iostream>
#include <vector>
using namespace std;

int main() {
    string password;
    cin >> password;
    vector<char> save; 
    vector<int> times; 

    int temp1;
    char temp;

    for(int i = 0; i < password.size(); i++){
        bool repeat = false; 
        for (int j = 0 ; j < save.size(); j++){
            if (password[i] == save[j]) {
                repeat = true;
                temp1 = j;
                cout << temp1 << endl;
                break;
            }
        }
            if(!repeat){
                save.push_back(password[i]);
                cout << save[i] << endl;
                times.push_back(1);
            } else{
                times[temp1]++;
        }
    }


    for (int i = 0; i < save.size(); i++){
        for (int j = 0; j < save.size(); j++) {
            if(times[i] > times[j]){
                temp = save[j];
                save[j] = save[i];
                save[i] = temp;

                temp1 = times[j];
                times[j] = times[i];
                times[i] = temp1;
            } else if (times[i] == times[j]) {
                if (int(save[i]) < int(save[j])) {
                    temp = save[j];
                    save[j] = save[i];
                    save[i] = temp;

                    temp1 = times[j];
                    times[j] = times[i];
                    times[i] = temp1;
                }
            }
        }
    }
    for (int i = 0; i < save.size(); i++) {
        cout << save[i] << "";
    }
}
