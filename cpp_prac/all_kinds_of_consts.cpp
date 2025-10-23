// constexpr -
constexpr double square(double x) { return x*x; }

constexpr double max1 = 1.4*square(17);     // OK: 1.4*square(17) is a constant expression
constexpr double max2 = 1.4*square(var);    // error: var is not a constant, so square(var) is not a constant
const double max3 = 1.4*square(var);        // OK: may be evaluated at run time
//  ^^ this is allowed in order to avoid having to write the same function twice once for cosntant expressions and once for variables.

// consteval
consteval double square2(double x) { return x*x; }

constexpr double max1 = 1.4*square2(17);         // OK: 1.4*square2(17) is a constant expression
const double max3 = 1.4*square2(var);            // error: var is not a constant -> since consteval marked functions MUST be run at compile time.
