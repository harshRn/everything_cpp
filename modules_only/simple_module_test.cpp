// // class Vector {
// //     public:
// //         Vector(int s);
// //         double& operator[](int i);
// //         int size();
// //     private:
// //         double* elem;
// //         int sz;
// // };

// // Vector::Vector(int s): elem{new double[s]}, sz{s} {}
// // double& Vector::operator[](int i) {return *(elem+i);}
// // int Vector::size() {return sz;}

// import test_module;
// #include <iostream>

// int main() {
//     std::cout << "Module support works! 2 + 3 = " << add(2, 3) << '\n';
//     return 0;
// }

import <iostream>;

int main() {
    std::cout << "Modules are supported!\n";
    return 0;
}
