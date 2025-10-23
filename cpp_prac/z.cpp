
#include <iostream>
#include <variant>

class Vector {
    public:
        Vector(int s): elem {new double[s]}, sz{s} {}
        double& operator[](int i) { return elem[i]; }
        int size() { return sz; }
    private:
     double* elem;  // pointer to elements
     int sz;        // number of elements
};
enum class Color {
    red, blue, green
};

int main() {
    Vector v(10);
    for (int i=0; i<10; i++) {
        v[i] = i+1;
    }
    double sum = 0.0;
    for (int i=0; i<10; i++) {
        sum += v[i];
    }
    std::cout << sum << '\n';
    // double x2{2.3};
    // int x3{x2};

    Color c = Color{3};
    std::cout << std::boolalpha << (c == Color::green) << '\n';

    return 0;
}
