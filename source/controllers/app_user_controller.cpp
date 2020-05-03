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
        auto validation = user.IsValid();

        if(validation.is_valid)
        {
            User newUser = MapperManager::Map<User, UserForCreation>(user);
            allUsers[newUser.user_id] = newUser;
            response.User = MapperManager::Map<UserForDisplay, User>(newUser);
        }

        response.IsSuccess = validation.is_valid;
        response.Message = validation.is_valid ? "New User Added" : "Failed To Add New User";
        response.Errors = validation.errors;

        return response;
    }

    UserResponse UpdateUser(UserForUpdate userForEditing)
    {
        ValidationSummary validation = userForEditing.IsValid();
        if(validation.is_valid)
        {
            MapperManager::Map<User, UserForUpdate>(&allUsers[userForEditing.user_id], userForEditing);
        }

        UserResponse response;
        response.IsSuccess = validation.is_valid;
        response.Message = validation.is_valid ? "User Updated !" : "Operation Failed";
        response.Errors = validation.errors;
        return response;
    }

    UserResponse RemoveUser(std::string user_id)
    {
        UserResponse response;
        allUsers.erase(user_id);
        response.IsSuccess = true;
        return response;
    }

    UserResponse ToggleUserLock(std::string user_id)
    {
        UserResponse response;
        allUsers[user_id].locked_out = !allUsers[user_id].locked_out;
        response.IsSuccess = true;
        return response;
    }
}