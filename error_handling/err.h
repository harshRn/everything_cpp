#include <iostream>
#include <string>

namespace err {
    enum class Error_action { ignore, throwing, terminating, logging };
    constexpr Error_action default_Error_action = Error_action::logging;
    enum class Error_code { range_error, length_error, divisor_error };

    extern std::string error_code_name[3];  // declare the array

    template<Error_action action = default_Error_action, class C>
    constexpr void expect(C cond, Error_code x)
    {
        if constexpr (action == Error_action::logging)
            if (!cond()) std::cerr << "expect() failure: " << int(x) << ' ' << error_code_name[int(x)] << '\n';
        if constexpr (action == Error_action::throwing)
            if (!cond()) throw x;
        if constexpr (action == Error_action::terminating)
            if (!cond()) std::terminate();
        // or no action
    }
}
