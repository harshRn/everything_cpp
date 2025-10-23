#include "Ops.h"

class MulOps: public Ops {
public:
    MulOps(int x): a{x} {}
    int twice() const override {
        std::cout << "twice from MulOpsOps ";
        return a*2;
    }
    ~MulOps() {
        std::cout << "destroyed derived class MulOps\n";
    }
private:
    int a;
};
