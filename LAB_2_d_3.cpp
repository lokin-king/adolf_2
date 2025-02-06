#include <iostream>
#include <random>
using namespace std;
int main() {
    string a;
    string b;
    bool spas = false;
    a = "Mathematic -  all   queen   of     the   science";
    for (int i = 0; i < a.length(); i++) {
        if (a[i] == ' ') {
            if (!spas){
                b+= a[i];
            }
            spas = true;
        }else {
            b+= a[i];
            spas = false;
        }
    }
    cout << b;
    return 0;
}
