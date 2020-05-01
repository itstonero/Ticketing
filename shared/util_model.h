#include "../app.h"

#ifndef UTIL_MODEL
#define UTIL_MODEL
    struct ValidationSummary
    {
        bool is_valid;
        std::vector<std::string> errors;
    };

namespace Utils
{
    std::string get_time_stamp(time_t time);
    std::string get_log_date();
}
#endif