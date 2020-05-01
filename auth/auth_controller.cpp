#include "auth_controller.h"

namespace AuthManager
{
    User get_signed_in_user(){
        User user;
        user.user_id = "ADMIN_IN_SESSION";
        return user;
    }
    AuthResponse sign_in_user()
    {
                AuthResponse response;

        return response;
    }
    AuthResponse sign_out_user()
    {
                AuthResponse response;

        return response;
    }
    AuthResponse is_authorized(std::string user_id, std::string role_id)
    {
        AuthResponse response;

        return response;
    }

}