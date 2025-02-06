#include <iostream>
#include <random>
using namespace std;
int main() {
    string a;
    string b;
    a = "Mathematic - a queen of the science";
    for (int i = 0; i < a.length(); i++) {
        if (a[i] == ' ') {
           b+=a[i+1];
            if (a[i+2] != ' ') {
                b += a[i+2];
            }
        b+=" ";
        }
    }
    cout << b << endl;
    return 0;
}
