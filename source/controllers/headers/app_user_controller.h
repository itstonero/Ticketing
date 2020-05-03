#include "../../models/headers/app_user_models.h"
#include "../../services/headers/auth_service.h"
#include "../../services/headers/mapper_service.h"
#include "../../services/headers/database_services.h"

#ifndef USER_CONTROLLER
#define USER_CONTROLLER


namespace UserManager
{
    UserResponse CreateNewUser(UserForCreation user);
    UserResponse UpdateUser(UserForUpdate user);
    UserResponse RemoveUser(std::string user_id);
    UserResponse ToggleUserLock(std::string user_id);

    int allUser(); //Sample Seeder
}

#endif