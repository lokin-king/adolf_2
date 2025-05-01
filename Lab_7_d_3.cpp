#include <iostream>
using namespace std;

int reverseNumber(int n) {
    int reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}

int main() {
    int num;
    cout << "Введіть натуральне число: ";
    cin >> num;

    cout << "Обернене число: " << reverseNumber(num) << endl;
    return 0;
}
