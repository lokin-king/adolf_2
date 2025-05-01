#include <iostream>
#include <string>
using namespace std;

int countVowels(const string& s) {
    int count = 0;
    string vowels = "aeiouAEIOU";
    for (char c : s)
        if (vowels.find(c) != string::npos) count++;
    return count;
}

int main() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    cout << "Голосних у 1-му рядку: " << countVowels(s1) << endl;
    cout << "Голосних у 2-му рядку: " << countVowels(s2) << endl;
    return 0;
}
