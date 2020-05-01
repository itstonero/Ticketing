#include "app_user_models.h"
#include "../auth/auth_service.h"

#ifndef USER_CONTROLLER
#define USER_CONTROLLER


namespace UserManager
{
    UserResponse create_new_user(UserForCreation user);
    UserResponse update_user(UserForUpdate user);
    UserResponse remove_user(std::string user_id);
    UserResponse toggle_user_lock(std::string user_id);
    int allUser();
}

#endif