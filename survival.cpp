#include <iostream>
using namespace std;

int main() {
    int n, height[2001] = { }, weight[2001] = { }, min = 1000000, mini;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> height[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> weight[i];
    }
    for (int i = 0; i < n; i++) {
        if (height[i] * weight[i] < min) {
            min = height[i] * weight[i];
            mini = i;
        }
    }
    cout << height[mini] << " " << weight[mini];
}
