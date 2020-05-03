#include "headers/auth_controller.h"

namespace AuthManager
{
    User CurrentUser()
    {
        User user;
        user.user_id = "ADMIN_IN_SESSION";
        return user;
    }

    AuthResponse SignInUser()
    {
        AuthResponse response;

        return response;
    }
    AuthResponse SignOutUser()
    {
                AuthResponse response;

        return response;
    }
    
    AuthResponse IsAuthorized(std::string user_id, std::string role_id)
    {
        AuthResponse response;

        return response;
    }

}