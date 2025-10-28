#include <iostream>

// int* begin(int& a) {
//     return &a;
// }

// int* end(int& a) {
//     return &a+1;
// }

// int main() {
//     int a = 1;
//     for (auto& e : a) {
//         std::cout << e << '\n';
//     }
// }


// for-each loop : New type idiom
class A {
    public:
        int a = 91;
};

A* begin(A& x) {
    return &x;
}

A* end(A& x) {
    return &x+2; // random boundary
}

int main() {
    A ob;
    for (auto& e: ob) {
        std::cout << e.a << '\n';
    }
}
