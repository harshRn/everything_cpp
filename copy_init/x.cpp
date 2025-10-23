#include <iostream>

class A {
    private:
        int a;
        char b;
        static int c;
    public:
        A(): a{1}, b{'a'} {}
        A(int x, char y): a{x}, b{y} {}
        void setInt(int x) {
            a=x;
        }
        void setChar(char y) {
            b=y;
        }
        int getInt() const {
            c += 2;
            return a;
        }
        char getChar() {
            return b;
        }
        void display() const { // but a non-const member function can only be invoked for non-const objects
            std::cout << a << ' ' << b << '\n';
        }
};
 int A::c = 1;
int main() {
    A ob(4,'d');
    const A obj = ob;
    ob.display();
    obj.display();
    std::cout << "changing stuff\n";
    ob.setInt(5);
    ob.setChar('e');
    ob.display();
    obj.display();
    A obk;
    obk.display();
    std::cout << obk.getInt() << '\n';
    // obj.getChar(); -> error: 'this' argument to member function 'getChar' has type 'const A', but function is not marked const
}
