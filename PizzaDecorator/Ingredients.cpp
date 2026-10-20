#include "Ingredients.h"
// Сир
string Cheese::getDescription() const {
    return pizza->getDescription() + ", Cheese";
}
int Cheese::getPrice() const {
    return pizza->getPrice() + 20;
}
// Ковбаса
string Sausage::getDescription() const {
    return pizza->getDescription() + ", Sausage";
}
int Sausage::getPrice() const {
    return pizza->getPrice() + 30;
}
// Овочі
string Vegetables::getDescription() const {
    return pizza->getDescription() + ", Vegetables";
}
int Vegetables::getPrice() const {
    return pizza->getPrice() + 15;
}
// Соус
string Sauce::getDescription() const {
    return pizza->getDescription() + ", Sauce";
}
int Sauce::getPrice() const {
    return pizza->getPrice() + 10;
}