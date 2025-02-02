#include <iostream>
#include <random>
using namespace std;
int main() {
    int a [5][4];
    int max = -1000;
    int min = 10000000;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            a[i][j] = rand() % 100;
        }
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {

            if (a[i][j]> max) {
                max = a[i][j];
            }
            if (a[i][j]< min) {
                min = a[i][j];
            }
        }
    }


    for (int i = 0; i < 5; i++) {
        cout << endl;
        for (int j = 0; j < 4; j++) {
            cout << a[i][j] << " ";
        }
    }
    cout << endl << "max:"<< max << " min:"<< min << endl
    << "aver = " << (max+min)/2 << endl;
    return 0;
}
