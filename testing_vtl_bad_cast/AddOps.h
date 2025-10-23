#include "Ops.h"

class AddOps: public Ops {
public:
    AddOps(int x): a{x} {}
    int twice() const override {
        std::cout << "twice from AddOps";
        return a+a;
    }
    ~AddOps() {
        std::cout << "destroyed derived class AddOps\n";
    }
private:
    int a;
};
