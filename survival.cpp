#include <iostream>
using namespace std;

int main() {
    int lion , temp;
    cin >> lion;
    int height[lion] , weight[lion] , save[lion] , weight1 , height1 ;
 
    for(int i = 0 ; i < lion ; i ++){
        cin >> height[i];
    }
    for(int i = 0 ; i < lion ; i ++){
        cin >> weight[i];
    }
    for(int i = 0 ; i < lion ; i ++){
        save[i] = height[i] * weight[i];
    }
    for(int i = 0 ; i < lion ; i ++){
        if(save[i] < save[i + 1]){
            height1 = height[i];
            weight1 = weight[i];
        }
    }
    cout << height1 << " " << weight1 ;
}