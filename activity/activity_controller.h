#include "../app.h"
#include "../logger/logger.h"

#ifndef ACTIVITY_CONTROLLER
#define ACTIVITY_CONTROLLER

struct ActivityResponse
{
    bool is_success;
    std::vector<std::string> errors;
    std::string message;
};

namespace ActivityManager
{
    ActivityResponse start_ticketing();
}
#endif

