#include <iostream>
#include <string>
using namespace std;

struct Product {
    string name;
    double price;
    double weight;
    int shelfLife; // в місцях

    void printIfExpiringSoon() const {
        if (shelfLife < 3) {
            cout << "Назва: " << name
                 << ", Ціна: " << price
                 << ", Вага: " << weight
                 << ", Термін придатності: " << shelfLife << " міс." << endl;
        }
    }
};

int main() {
    const int n = 5;
    Product products[n];

    // Введення товарів
    for (int i = 0; i < n; i++) {
        cout << "Товар #" << i + 1 << endl;
        cout << "Назва: ";
        cin >> products[i].name;
        cout << "Ціна: ";
        cin >> products[i].price;
        cout << "Вага: ";
        cin >> products[i].weight;
        cout << "Термін придатності (міс): ";
        cin >> products[i].shelfLife;
    }

    cout << "\nТовари з терміном придатності менше 3 місяців:\n";
    for (int i = 0; i < n; i++) {
        products[i].printIfExpiringSoon();
    }

    return 0;
}
