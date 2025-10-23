import hello;
#include <iostream>

int main() {
    std::cout << "Module works! 5 + 3 = " << add(5, 3) << '\n';
    return 0;
}


// modules
/*

# Step 1: Precompile module interface → .pcm
# Step 2: Compile module to object → .o
# Step 3: Compile main (needs to know where .pcm is)
# Step 4: Link everything

clang++ -std=c++20 --precompile hello.cppm -o hello.pcm
clang++ -std=c++20 -c hello.pcm -o hello.o
clang++ -std=c++20 -fprebuilt-module-path=. -c main.cpp -o main.o
clang++ hello.o main.o -o program
 */
