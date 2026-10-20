#pragma once
#include "PizzaDecorator.h"
class Cheese : public PizzaDecorator {
public:
    using PizzaDecorator::PizzaDecorator;
    string getDescription() const override;
    int getPrice() const override;
};
class Sausage : public PizzaDecorator {
public:
    using PizzaDecorator::PizzaDecorator;
    string getDescription() const override;
    int getPrice() const override;
};
class Vegetables : public PizzaDecorator {
public:
    using PizzaDecorator::PizzaDecorator;
    string getDescription() const override;
    int getPrice() const override;
};
class Sauce : public PizzaDecorator {
public:
    using PizzaDecorator::PizzaDecorator;
    string getDescription() const override;
    int getPrice() const override;
};
