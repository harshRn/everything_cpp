// #include <iostream>
// class A {
//     public:
//         constexpr A(): a{123} {}
//         constexpr A(unsigned long long x): a{x} {}
//         unsigned long long disp() {
//             return a;
//         }
//     private:
//         unsigned long long a;
// };

// constexpr A operator""_a(unsigned long long x) {
//     return {x};
// }

// int main() {
//     auto a = 21_a;
//     std::cout << a.disp() << '\n';
// }

#include <iostream>
class A {
    public:
        constexpr A(): a{123} {}
        constexpr A(unsigned long long x): a{x} {}
        unsigned long long disp() {
            return a;
        }
    private:
        unsigned long long a;
};

constexpr A operator""_a(unsigned long long x) { // underscores are a must for defining new literals.
    // all declarations NOT containing the underscore are reserved (BUT could be overridden with a warning).
    return {x};
}

int main() {
    auto a = 21_a;
    std::cout << a.disp() << '\n';
}
