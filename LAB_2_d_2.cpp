#include <iostream>
#include <random>
using namespace std;
int main() {
    string a;
    int max;
    int min=10000;
    int c=0;
    a = "Mathematic - all queen of the science";
    for (int i = 0; i < a.length(); i++) {

        if (a[i] != ' ')
            c++;
        if (a[i] == ' ') {
            if (c > max)
                max = c;
            if (c < min)
                min = c;
            c = 0;

        }
    }
    cout << "Max = " << max << endl;
    cout << "Min = " << min << endl;
    return 0;
}
