#include "headers/app_user_controller.h"

namespace UserManager
{
    std::map<std::string, User> allUsers;

    int allUser()
    {
        return allUsers.size();
    }
    
    UserResponse CreateNewUser(UserForCreation user)
    {
        UserResponse response;
        auto validation = user.is_valid();

        if(validation.is_valid)
        {
            User newUser = MapperManager::Map<User, UserForCreation>(user);
            allUsers[newUser.user_id] = newUser;
            response.user = MapperManager::Map<UserForDisplay, User>(newUser);
        }

        response.is_success = validation.is_valid;
        response.message = validation.is_valid ? "New User Added" : "Failed To Add New User";
        response.errors = validation.errors;

        return response;
    }

    UserResponse UpdateUser(UserForUpdate userForEditing)
    {
        ValidationSummary validation = userForEditing.is_valid();
        if(validation.is_valid)
        {
            allUsers[userForEditing.user_id] = MapperManager::Map<User, UserForUpdate>(allUsers[userForEditing.user_id], userForEditing);
        }

        UserResponse response;
        response.is_success = validation.is_valid;
        response.message = validation.is_valid ? "User Updated !" : "Operation Failed";
        response.errors = validation.errors;
        return response;
    }

    UserResponse RemoveUser(std::string user_id)
    {
        UserResponse response;
        allUsers.erase(user_id);
        response.is_success = true;
        return response;
    }

    UserResponse ToggleUserLock(std::string user_id)
    {
        UserResponse response;
        allUsers[user_id].locked_out = !allUsers[user_id].locked_out;
        response.is_success = true;
        return response;
    }
}