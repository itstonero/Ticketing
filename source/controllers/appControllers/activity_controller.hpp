#include "super_admin_activity_controller.h"
#include "admin_activity_controller.h"
#include "worker_activity_controller.h"

#include <appServices/logger.hpp>
#include <appControllers/auth_controller.hpp>
#include <appControllers/role_controller.hpp>

#ifndef ACTIVITY_CONTROLLER
#define ACTIVITY_CONTROLLER

struct ActivityResponse
{
    bool IsSuccess;
    std::vector<std::string> Errors;
    std::string Message;
};

namespace ActivityManager
{
    ActivityResponse StartUI();
}
#endif

