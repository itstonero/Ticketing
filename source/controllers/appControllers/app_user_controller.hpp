#include <appModels/app_user_models.hpp>
#include <appServices/mapper_service.hpp>
#include <appServices/database_services.hpp>
#include <appServices/auth_service.hpp>

#ifndef USER_CONTROLLER
#define USER_CONTROLLER


namespace UserManager
{
    UserResponse CreateNewUser(UserForCreation user);
    UserResponse UpdateUser(UserForUpdate user);
    UserResponse RemoveUser(std::string user_id);
    UserResponse ToggleUserLock(std::string user_id);

}

#endif