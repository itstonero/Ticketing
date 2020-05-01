#include "app_user_controller.h"

namespace UserManager
{
    std::vector<User> allUsers;

    int allUser()
    {
        return allUsers.size();
    }
    
    UserResponse create_new_user(UserForCreation user)
    {
        UserResponse response;
        ValidationSummary validation = user.is_valid();

        if(validation.is_valid)
        {
            UserForDisplay displayUser;
            User newUser;
            displayUser.user_id = newUser.user_id = AuthService::generate_unique_id();
            displayUser.first_name = newUser.first_name = user.first_name;
            displayUser.last_name = newUser.last_name = user.last_name;
            displayUser.contact_address =  newUser.contact_address = user.contact_address;
            displayUser.email_address =  newUser.email_address = user.email_address;
            newUser.password_hash = AuthService::generate_password_hash(user.password);
            displayUser.phone_number =  newUser.phone_number = user.phone_number;
            allUsers.push_back(newUser);
            response.user = displayUser;
        }

        response.is_success = validation.is_valid;
        response.message = validation.is_valid ? "New User Added" : "Failed To Add New User";
        response.errors = validation.errors;

        return response;
    }

    UserResponse update_user(UserForUpdate userForEditing)
    {
        ValidationSummary validation = userForEditing.is_valid();
        if(validation.is_valid)
        {
            for(User user : allUsers)
            {
                if(user.user_id == userForEditing.user_id)
                {
                    user.contact_address = userForEditing.contact_address;
                    user.email_address = userForEditing.email_address;
                    user.phone_number = userForEditing.phone_number;
                    user.first_name = userForEditing.first_name;
                    user.last_name = userForEditing.last_name;
                    break;
                }
            }
        }

        UserResponse response;
        response.is_success = validation.is_valid;
        response.message = validation.is_valid ? "User Updated !" : "Operation Failed";
        response.errors = validation.errors;
        return response;
    }

    UserResponse remove_user(std::string user_id)
    {
        std::vector<User> newList;
        for(User user : allUsers)
        {
            if(user.user_id != user_id)
            {
                newList.push_back(user);
            }
        }
        UserResponse response;
        if(newList.size() != allUsers.size())
        {
        }
        allUsers = newList;
        return response;
    }

    UserResponse toggle_user_lock(std::string user_id)
    {
        UserResponse response;
        for(User user : allUsers)
        {
            if(user.user_id != user_id)
            {
                user.locked_out = !user.locked_out;
                break;
            }
        }
        return response;
    }
}