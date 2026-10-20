#pragma once
#include "IPizza.h"
#include <memory>
class PizzaDecorator : public IPizza {
protected:
    unique_ptr<IPizza> pizza;
public:
    PizzaDecorator(unique_ptr<IPizza> p);
    string getDescription() const override;
    int getPrice() const override;
};
