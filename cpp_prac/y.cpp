#include <iostream>

int main() {
    std::string s = "a";
    std::string& ref;

    // const std::string& ref = s; // read as reference to a const, and cannot be changed through this reference
    // ref += "adding to const reference is allowed";
    // std::cout << "s = " << s << '\n';
    // std::cout << "ref s = " << ref << '\n';
    int a = 1'23;
    std::cout << a+2 << '\n';

    // A reference and a pointer both refer/point to an object and both are represented in memory as a machine address.
    // However, the language rules for using them differ.
    // Assignment to a reference does not change what the reference refers to but assigns to the referenced object:

}
