#include <string>
#include <vector>
#include <ctime>
#ifndef UTIL_MODEL
#define UTIL_MODEL
    struct ValidationSummary
    {
        bool is_valid;
        std::vector<std::string> errors;
    };

    namespace Utils
    {
        std::string GetTimeStamp(time_t time);
        std::string GetLogDate();
    }
#endif