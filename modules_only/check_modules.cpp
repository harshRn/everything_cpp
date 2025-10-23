#include <iostream>

int main() {
#if __cpp_modules >= 201907L
    std::cout << "✓ C++20 modules are supported!\n";
#else
    std::cout << "✗ C++20 modules are NOT supported.\n";
#endif
    return 0;
}
