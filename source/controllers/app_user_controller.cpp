#include "headers/app_user_controller.h"

namespace UserManager
{
    
    UserResponse CreateNewUser(UserForCreation user)
    {
        UserResponse response;
        auto validation = user.IsValid();

        if(validation.is_valid)
        {
            User newUser = MapperManager::Map<User, UserForCreation>(user);
            Repository::InsertEntity<User>(&newUser);
            if(Repository::SaveChanges())
            {
                response.User = MapperManager::Map<UserForDisplay, User>(newUser);
            }
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
            User user = Repository::FindByID<User>(userForEditing.user_id);
            MapperManager::Map<User, UserForUpdate>(&user, userForEditing);
            Repository::UpdateEntity<User>(user);
        }

        UserResponse response;
        response.IsSuccess = Repository::SaveChanges();
        response.Message = response.IsSuccess ? "User Updated !" : "Operation Failed";
        response.Errors = validation.errors;
        return response;
    }

    UserResponse RemoveUser(std::string user_id)
    {
        User userToDelete = Repository::FindByID<User>(user_id);
        Repository::DeleteEntity<User>(userToDelete);

        UserResponse response;
        response.IsSuccess = Repository::SaveChanges();
        return response;
    }

    UserResponse ToggleUserLock(std::string user_id)
    {
        User userToToggleState = Repository::FindByID<User>(user_id);
        userToToggleState.locked_out = !userToToggleState.locked_out;
        Repository::UpdateEntity<User>(userToToggleState);

        UserResponse response;
        response.IsSuccess = Repository::SaveChanges();
        return response;
    }
}