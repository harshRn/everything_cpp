#include <iostream>

int main() {
    std::string s = "a";
    std::string t = "b";
    std::string& y = s;
    std::string& z = t;
    std::cout << "y = " <<  y << '\n';
    std::cout << "z = " << z << '\n';
    std::cout << "s = " << s << '\n';
    std::cout << "t = " << t << '\n';
    std::cout << " changing reference y\n";
    y = t;
    std::cout << "y = " <<  y << '\n';
    std::cout << "z = " << z << '\n';
    std::cout << "s = " << s << '\n';
    std::cout << "t = " << t << '\n';
    std::cout << "adding to y\n";
    y += "changed";
    std::cout << "y = " <<  y << '\n';
    std::cout << "z = " << z << '\n';
    std::cout << "s = " << s << '\n';
    std::cout << "t = " << t << '\n';

    // A reference and a pointer both refer/point to an object and both are represented in memory as a machine address.
    // However, the language rules for using them differ.
    // Assignment to a reference does not change what the reference refers to but assigns to the referenced object:

}
