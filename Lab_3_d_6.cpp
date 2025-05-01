#include <iostream>
#include <string>
using namespace std;

int main() {
    string S, encrypted;
    getline(cin, S);

    for (char c : S)
        encrypted += char(c + 2);

    cout << "Зашифровано: " << encrypted << endl;
    return 0;
}
