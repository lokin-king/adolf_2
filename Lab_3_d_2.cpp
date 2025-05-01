#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    getline(cin, S);

    int spaceCount = 0, digitCount = 0;

    for (char c : S) {
        if (c == ' ') spaceCount++;
        if (isdigit(c)) digitCount++;
    }

    cout << "Кількість пробілів: " << spaceCount << endl;
    cout << "Кількість цифр: " << digitCount << endl;
    return 0;
}
