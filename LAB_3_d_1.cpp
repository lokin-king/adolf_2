#include <iostream>
#include <string>
using namespace std;

bool isVowel(char c) {
    string vowels = "aeiouAEIOU";
    return vowels.find(c) != string::npos;
}

int main() {
    string S, result;
    getline(cin, S);

    for (char c : S) {
        if (c != ' ') {
            result += c;
            if (isVowel(c)) result += c; // подвоїти голосну
        }
    }

    cout  << result << endl;
    return 0;
}
