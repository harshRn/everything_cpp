#include <ios>
import Vector;        // get Vector's interface
#include <iostream>
#include <cmath>      // get the standard-library math function interface including sqrt()

double sqrt_sum(Vector& v)
{
    double sum = 0;
    for (int i=0; i!=v.size(); ++i)
          sum+=std::sqrt(v[i]);         // sum of square roots
    return sum;
}

int main() {
    Vector x{5};
    for (int i=0; i<5; i++) {
        x[i] = (i+1) * (i+1);
    }
    std::cout << sqrt_sum(x) << '\n';
    Vector y{5};
    for (int i=0; i<5; i++) {
        y[i] = (i+1) * (i+1);
    }
    std::cout << std::boolalpha << ( x == y ) << '\n';
}


/*
 * clang++ -std=c++20 -x c++-module --precompile Vector.cpp -o Vector.pcm // the module file is NOT in cppm file
   clang++ -std=c++20 -c Vector.pcm -o Vector.o
   clang++ -std=c++20 -fprebuilt-module-path=. -c main.cpp -o main.o
   clang++ Vector.o main.o -o test
 */
