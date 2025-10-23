#include <iostream>
#include <vector>
class A{
    public:
        A(): a{0}, b{0} {}
        A(int x, int y): a{x}, b{y} {}
        int a;
        int b;

        auto operator<=>(const A& other) const {
            // First compare by member 'a'
            if (auto cmp = a <=> other.a; cmp != 0) { // using the spaceship operator defined for ints
                return cmp;
            }
            // If 'a' is equal, compare by member 'b'
            return b <=> other.b;

            // COULD DO IT ALL MANUALLY LIKE SO :
            // if (a != other.a) {
            //    return a < other.a ? std::strong_ordering::less : std::strong_ordering::greater;
            // }
            // if (b != other.b) {
                // return b < other.b ? std::strong_ordering::less : std::strong_ordering::greater;
            // }
            // return std::strong_ordering::equal;
        }

        // IF WE OVERLOAD THE <=> OPERATOR, == SHOULD BE OVERLOADED AS WELL FOR PERFORMANCE REASONS
};

int main() {
    std::vector<A> x;
    A a(2,3), b(1, 4), c(4,5), d(2, 5);
    x.push_back(a);
    x.push_back(b);
    x.push_back(c);
    x.push_back(d);
    for (const auto& it : x) {
        std::cout << it.a << ' ' << it.b << '\n';
    }
    sort(x.begin(), x.end());
    for (const auto& it : x) {
        std::cout << it.a << ' ' << it.b << '\n';
    }
    return 0;
}
