#include <iostream>
using namespace std;

int main() {
    int n, counter = 0, money = 0, j = 0, money_sum = 0, small;
    cin >> n;
    int books[n], days[n], record[n], record2[n];
    for (int i = 0; i < n; i++) {
        books[i] = 0;
        days[i] = 0;
        record[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        cin >> books[i];
        cin >> days[i];
    }
    for (int i = 0; i < n; i++) {
        if (days[i] > 100) {
            counter++;
            money = (days[i] - 100) * 5;
            record[j] = books[i];
            j++;
            money_sum += money;
        }
    }
    for (int i = 0; i < j; i++) {
        for (int k = i; k < j ; k++) {
            if (record[k] < record[i]) {
                small = record[k];
                record[k] = record[i];
                record[i] = small;
            }
        }
    }
    for (int i = 0; i < j; i++) {
        cout << record[i] << " ";
    }
    if (money > 0) {
        cout << "\n" << money_sum;
    }
}
