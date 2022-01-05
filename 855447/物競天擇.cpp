#include <iostream>
using namespace std;

int main() {
    int n, h, w, a, s_lion;
    int height[2001] = {0};
    int weight[2001] = {0};
    s_lion = 99999999;
    a = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> height[i];
    } for (int j = 0; j < n; j++) {
        cin >> weight[j];
        if (height[j] * weight[j] < s_lion) {
            s_lion = height[j] * weight[j];
            a = j;
        }
    }
    cout << height[a] << " " << weight[a];
} 