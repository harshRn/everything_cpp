#include <iostream>
class A {
    public:
        A() {}
        A(const A& ) = delete;
        int getVal() const {return a; }
    private:
        int a{12};
};

void valPrinter(const A& a) { // copy constructor is not invoked in this declaration because
    // we are directly passing what we would to the copy constructor
    //
// void valPrinter(A a)//  will not work however
    std::cout << a.getVal() << '\n';
}

int main() {
    A ob;

    valPrinter(ob);
}
