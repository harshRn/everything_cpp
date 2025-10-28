#include <iostream>
#include <concepts>
#include <type_traits>

template<typename T>
concept C = std::is_integral<T>::value || std::is_floating_point<T>::value;

template<C T>
class A {
    public:
        T a;
        A(T x): a{x} {}
        void display() {
            std::cout << a + 1 << '\n';
        }
};

int main() {
    A ob(11);
    ob.display();
    A obj(2.0);
    obj.display();
    A obk("hello");
    return 0;
}
