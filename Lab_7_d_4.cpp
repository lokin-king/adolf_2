#include <iostream>
#include <cmath>
using namespace std;

double f(double x, double y) {
    return (y + x + 2) / sqrt(x * x + y * y + 1) +
           (x - y + 1) / (x * x + y * y + 2);
}

double u(double a, double b) {
    return 0.5 + f(a, b) + f(b, a) + (b - a);
}

int main() {
    double a, b;
    cout << "Введіть a та b: ";
    cin >> a >> b;

    cout << "Значення u(a, b): " << u(a, b) << endl;
    return 0;
}
