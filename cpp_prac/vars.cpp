#include <iostream>

int main() {
    std::variant<int, char>  x = 11;
    std::variant<double, int, char, long long> y = 23l;
    if (std::holds_alternative<int>(x)) {
        std::cout << std::get<int>(x) << '\n';
    }
    if (std::holds_alternative<double>(y)) {
        std::cout << std::get<double>(y) << '\n';
    }

    if (std::holds_alternative<char>(y)) {
        std::cout << std::get<char>(y) << '\n';
    }

    if (std::holds_alternative<long long>(y)) {
        std::cout << std::get<long long>(y) << '\n';
    }
}
