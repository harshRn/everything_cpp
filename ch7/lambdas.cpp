#include <iostream>
template<typename C, typename Oper>
void for_each(C& c, Oper op)   // assume that C is a container of pointers (see also §8.2.1)
{
     for (auto& x : c)
           op(x);       // pass op() a reference to each element pointed to
}


template<class S>
void sum(std::vector<S>& v)
{
    for_each(v,[](S& s) {  std::cout << s << "-\n";});
}

int main() {
    std::vector<int> x{1,2,3,4};
    sum(x);
    return 0;
}
