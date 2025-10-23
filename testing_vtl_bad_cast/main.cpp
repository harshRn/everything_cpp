#include <iostream>
#include <vector>
#include "AddOps.h"
#include "MulOps.h"
int main() {
    // Ops ob(1); // The compiler will NOT allow this for an abstract class
    // main.cpp:5:9: error: variable type 'Ops' is an abstract class
    //         5 |     Ops ob(1);
    //           |         ^
    AddOps* ob = new AddOps(2);
    MulOps* obj = new MulOps(4);
    std::vector<Ops*> x;
    x.push_back(ob);
    x.push_back(obj);
    std::cout << ob->twice() << '-' << obj->twice() << '\n';
    Ops* obp = new AddOps(43);
    try {
        // MulOps* obk2 = dynamic_cast<MulOps*>(obp); // this will not throw the bad_cast exception but rather return the nullptr
        // obk2->twice();


        // for illegal conversion to throw an exception, we need to use a reference as the l-value, because references
        // can't point to memory of different type
        MulOps& obk2 = dynamic_cast<MulOps&>(*obp);
        obk2.twice();
    } catch (const std::exception& e) {
        std::cout << "problem : " << e.what() << '\n';
    }
    AddOps* obk = dynamic_cast<AddOps*>(x.back());
    obk->twice();
    return 0;
}
