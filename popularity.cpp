#include <iostream> 
using namespace std; 
int main() { 
    int length , width; 
    cin >> width >> length ; 
    int com[width + 2][length + 2]; 
    int ans[width + 2][length + 2]; 

    for (int i = 0; i < width + 2; i++) { 
        for (int j = 0; j < length + 2; j++) { 
            com[i][j] = 0; 
        } 
    } 

    for(int i = 1 ; i < width + 1 ; i++){ 
        for(int j = 1 ; j < length + 1 ; j++){ 
            cin >> com[i][j]; 
        } 
    } 

    for(int i = 0 ; i < width + 2 ; i++){ 
        for(int j = 0 ; j < length + 2 ; j++){ 
            int temp = 0; 
            int num = 0; 
            if(com[i][j] == 0){ 
                if(com[i][j + 1] != 0){ 
                    num += com[i][j + 1]; 
                    temp++; 
                } 
                if(com[i][j - 1] != 0){ 
                    num += com[i][j - 1]; temp++; 
                        } 
                if(com[i + 1][j] != 0){ 
                    num += com[i + 1][j]; 
                    temp++; 
                    } 
                if(com[i - 1][j] != 0){ 
                    num += com[i - 1][j]; 
                    temp++; 
                    } 
                if (temp == 0) { 
                    ans[i][j] = 0; 
                } else { 
                    ans[i][j] = num / temp; 
                    } 
            } else{
                ans[i][j] = com[i][j]; 
            } 
        } 
    }
    for(int i = 1 ; i < width + 1 ; i++){ 
        for(int j = 1 ; j < length + 1 ; j++){ 
            cout << ans[i][j] << " "; 
        } 
        cout << endl; 
    } 
}