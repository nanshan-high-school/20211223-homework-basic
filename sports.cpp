#include <iostream>
using namespace std;

int main() {
    int n, mt[30] = {0}, p;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> mt[i];
    }
    cin >> p;
    int end = p;
    p--;
    if (p == 0) {
        int i = 0;
        do {
            end = i + 1;
            i++;
        } while (mt[i - 1] >= mt[i] && i < n);
    } else if (p == n - 1) {
        int i = p;
        do {
            end = i + 1;
            i--;
        } while (mt[i + 1] >= mt[i] && i > -1);
    } else if (mt[p] - mt[p + 1] > mt[p] - mt[p - 1]) {
        int i = p;
        do {
            end = i + 1;
            i++;
        } while (mt[i - 1] >= mt[i] && i < n);
    } else {
        int i = p;
        do {
            end = i + 1;
            i--;
        } while (mt[i + 1] >= mt[i] && i > -1);
    }
    cout << end;
}
