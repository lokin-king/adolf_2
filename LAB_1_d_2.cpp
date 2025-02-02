#include <iostream>
#include <random>
using namespace std;
int main() {
    int a [5][5];
    int b [5];
    int max ;
    int sum;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            a[i][j] = rand() % 100;
        }
    }
    for (int i = 0; i < 5; i++) {
        b[i] = max ;
        max = 0;
        for (int j = 0; j < 5; j++) {
        if (max < a[i][j]) {
            max = a[i][j];
            }
        }
    }
    for (int i = 0; i < 5; i++) {
        sum+=b[i];
    }

    for (int i = 0; i < 5; i++) {
        cout << endl;
        for (int j = 0; j < 4; j++) {
            cout << a[i][j] << " ";
        }
    }

    cout << endl;
    for (int i = 0; i < 5; i++) {
        cout << b[i]<< " ";
    }
    cout << endl<< sum;
    return 0;
}
