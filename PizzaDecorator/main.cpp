#include <iostream>
#include "BasicPizza.h"
#include "Ingredients.h"
using namespace std;
int main() {
    unique_ptr<IPizza> pizza = make_unique<BasicPizza>();
    int choice;
    while (true) {
        cout << "\n===== PIZZA MENU =====\n";
        cout << "Base pizza: 100 UAH\n";
        cout << "1. Cheese +20 UAH\n";
        cout << "2. Sausage +30 UAH\n";
        cout << "3. Vegetables +15 UAH\n";
        cout << "4. Sauce +10 UAH\n";
        cout << "5. Finish order\n";
        cout << "Choice: ";
        if (!(cin >> choice)) {
            if (cin.eof()) break;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input!\n";
            continue;
        }
        switch (choice) {
        case 1:
            pizza = make_unique<Cheese>(move(pizza));
            break;
        case 2:
            pizza = make_unique<Sausage>(move(pizza));
            break;
        case 3:
            pizza = make_unique<Vegetables>(move(pizza));
            break;
        case 4:
            pizza = make_unique<Sauce>(move(pizza));
            break;
        case 5:
            cout << "\n===== YOUR ORDER =====\n";
            cout << pizza->getDescription() << endl;
            cout << "Total: " << pizza->getPrice() << " UAH\n";
            return 0;
        default:
            cout << "Invalid choice!\n";
            continue;
        }
        cout << "Ingredient added!\n";
        cout << "Current price: "
            << pizza->getPrice() << " UAH\n";
    }
    return 0;
}
