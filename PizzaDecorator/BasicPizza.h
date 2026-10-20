#pragma once
#include "IPizza.h"
class BasicPizza : public IPizza {
public:
    string getDescription() const override;
    int getPrice() const override;
};
