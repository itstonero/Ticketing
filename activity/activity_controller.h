#include "../app.h"
#include "../logger/logger.h"
#include "super_admin_activity_controller.h"
#include "admin_activity_controller.h"
#include "worker_activity_controller.h"
#include "../auth/auth_controller.h"
#include "../roles/role_controller.h"

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

