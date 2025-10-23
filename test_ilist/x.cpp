#include <iostream>
#include <initializer_list>
auto ilist(std::initializer_list<int> x) -> void {
    for (const auto& it : x) {
        std::cout << it << '-';
    }
}

auto main() -> int {
    ilist({1,2,3,4});
    return 0;
}
