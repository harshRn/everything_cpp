#include <iostream>
#include <vector>
#include <numeric>
#include <concepts>
#include <type_traits>

template<typename T>
concept Numbers = std::is_integral<T>::value || std::is_floating_point<T>::value;

template<Numbers T>
class A {
    public:
        std::vector<T> v;
        A(): v(5) { }
};

int main() {
    A<int> ob;
    std::iota(ob.v.begin(), ob.v.end(), 1);
    // A<std::string> obj; // compiler error:
    /*
     * constrained.cpp:20:5: error: constraints not satisfied for class template 'A' [with T = std::basic_string<char>]
         A<std::string> obj;
         ^~~~~~~~~~~~~~
     constrained.cpp:10:10: note: because 'std::basic_string<char>' does not satisfy 'Numbers'
     template<Numbers T>
              ^
     constrained.cpp:8:19: note: because 'std::is_integral<basic_string<char> >::value' evaluated to false
     concept Numbers = std::is_integral<T>::value || std::is_floating_point<T>::value;
                       ^
     constrained.cpp:8:49: note: and 'std::is_floating_point<basic_string<char> >::value' evaluated to false
     concept Numbers = std::is_integral<T>::value || std::is_floating_point<T>::value;
                                                     ^
     1 error generated.
     */
    // obj.push_back("dum dum");
    A<float> obk;
    std::iota(obk.v.begin(), obk.v.end(), 1.0);
    for (const auto& e : ob.v)
        std::cout << e << ' ';
    std::cout << '\n';
    // for (const auto& e : obj.v)
    //     std::cout << e << ' ';
    // std::cout << '\n';
    for (const auto& e : obk.v)
        std::cout << e << ' ';
    std::cout << '\n';
}
