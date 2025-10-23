#include <iostream>

int p(int a, int b= 10, int c) {
    return a+b+c;
}

int main() {
    p(1,3);
    return 0;
}
