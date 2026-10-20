#include "PizzaDecorator.h"
#include <utility>
using namespace std;
PizzaDecorator::PizzaDecorator(unique_ptr<IPizza> p)
    : pizza(move(p)) {
}
string PizzaDecorator::getDescription() const {
    return pizza->getDescription();
}
int PizzaDecorator::getPrice() const {
    return pizza->getPrice();
}
