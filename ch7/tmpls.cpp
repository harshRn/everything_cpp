#include <iostream>
#include <vector>
#include <numeric>

class A {
    public:
        std::vector<int> a;
        A(): a(5) {std::iota(a.begin(), a.end(), 1); }
};

int* begin(A& ob) {
    return &ob.a[0];
}

int* end(A& ob) {
    return &ob.a.back()+1;
}

int main() {
    A ob;
    // for (int &e: ob.a)
    //     std::cout << e << '\n';
    for (int a: ob) {
        std::cout << a << '\n';
    }
    return 0;
}
