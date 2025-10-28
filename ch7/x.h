#include <iostream>

namespace Custom {
class X {
public:
    constexpr X(int a2): a{a2} {}
    void display() {
        std::cout << a << '\n';
    }
private:
    int a;
};
constexpr X operator""_xy(unsigned long long x) {
    return {static_cast<int>(x)};
}
}
