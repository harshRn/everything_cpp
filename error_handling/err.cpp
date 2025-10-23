#include "err.h"

namespace err {
    // Only define the non-template data
    std::string error_code_name[3] { "range error", "length error", "divide by zero error" };
}
