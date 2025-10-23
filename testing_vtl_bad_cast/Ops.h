#pragma once
#include <iostream>
class Ops {
public:
    virtual int twice() const=0;
    virtual ~Ops() {std::cout << "destroyed pure virtual\n"; }
private:
};
