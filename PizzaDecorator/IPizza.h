#pragma once
#include <string>
using namespace std;
class IPizza {
public:
    virtual string getDescription() const = 0;
    virtual int getPrice() const = 0;
    virtual ~IPizza() = default;
};
