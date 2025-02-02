#include <iostream>
#include <random>
using namespace std;
int main() {
    int a [7][7];
    int max ;
    int sum;
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            a[i][j] = rand() % 100;
        }
    }
    for (int i = 0; i < 7; i++) {
        sum += a[i][i];
    }
    for (int i = 0; i < 6; i++) {
        sum += a[0][i + 1];
    }
    for (int i = 0; i < 6; i++) {
        sum += a[i][6];
    }
    for (int i = 0; i < 7; i++) {
        cout << endl;
        for (int j = 0; j < 7; j++) {
            cout << a[i][j] << " " ;
        }
    }
    cout << endl<< sum;
    return 0;
}
