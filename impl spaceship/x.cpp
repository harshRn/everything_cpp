#include <iostream>
#include <vector>
class A{
    public:
        A(): a{0}, b {0} {}
        A(int x, int y): a{x}, b{y} {}
        int a;
        int b;
};

bool cmp(A a, A b) {
    // if (a.a != b.a) {
    //     return a.a < b.a;
    // }
    // return a.b < b.b;

    if (auto cmp = a.a <=> b.a; cmp != 0) { // using the spaceship operator defined for ints
        return cmp;
    }
    // If 'a' is equal, compare by member 'b'
    return a.b <=> b.b;

}

int main() {
    std::vector<A> x;
    A a(2,3), b(1, 4), c(4,5), d(2, 5);
    x.push_back(a);
    x.push_back(b);
    x.push_back(c);
    x.push_back(d);
    for (const auto& it : x) {
        std::cout << it.a << ' ' << it.b << '\n';
    }
    sort(x.begin(), x.end(), cmp);
    for (const auto& it : x) {
        std::cout << it.a << ' ' << it.b << '\n';
    }
    return 0;
}
