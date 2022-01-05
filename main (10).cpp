#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    int c[99];
    for (int b=0 ; b<99;b++){
        c[b]=99999;
        }
    for (int b=1 ; b<a+1;b++){
        cin >> c[b];
        }
    int d;
    cin >> d;
    if (c[d-1]<c[d] || c[d+1]<c[d]){
        if (c[d-1]<c[d+1] ){
            d=d-1;
            for (int e=d; e>0;e--){
                
              if (c[d]>c[d-1] || c[d]==c[d-1]){
                  d=d-1;
                
                }else if (c[d]<c[d-1]){
                    break;
                }  
            }
            
            
        }else if (c[d-1]>c[d+1]){
            d=d+1;
            for (int e=a-d; e>0;e--){
              if (c[d]>c[d+1]|| c[d]==c[d+1]){
                  d=d+1;

                }else if (c[d]<c[d+1]){
                    break;
                }  
            }
            
            
        }
    }
    cout << d;

} 
/*
C
*/
