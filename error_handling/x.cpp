#include <iostream>
#include "err.h"

double divide(int a, int b)
{
    err::expect([a,b] { return b != 0; }, err::Error_code::divisor_error); // is a lambda a class
    return (double)a/b;
}


int main() {
    divide(9,3);
    divide(1,0);
    return 0;
}
