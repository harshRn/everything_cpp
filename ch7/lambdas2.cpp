#include <iostream>
template<typename C, typename Oper>
void for_each(C& c, Oper op)   // assume that C is a container of pointers (see also §8.2.1)
{
     for (auto& x : c)
           op(x);       // pass op() a reference to each element pointed to
}


// template<class S>
auto display = [](auto& s) {  std::cout << s << "-\n";};

// if we use auto in the lambda param set, we can avoid the template declaration above it, and the subsequent mentioning of types when using the lambda

template<class S>
void sum(std::vector<S>& v)
{
    for_each(v,[](S& s) {  std::cout << s << "-\n";});
}

int main() {
    std::vector<int> x{1,2,3};
    // for_each(x, display<int>);
    for_each(x, display);
    std::vector<std::string> x2 = {"a", "b"};
    // for_each(x2, display<std::string>);
    for_each(x2, display);
    return 0;
}
