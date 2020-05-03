#include "super_admin_activity_controller.h"
#include "admin_activity_controller.h"
#include "worker_activity_controller.h"

#include "../../shared/headers/shared.h"
#include "../../services/headers/logger.h"
#include "../../controllers/headers/auth_controller.h"
#include "../../controllers/headers/role_controller.h"

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

