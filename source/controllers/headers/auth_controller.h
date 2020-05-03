#include "../../models/headers/app_user_models.h"
#include "../../models/headers/auth_models.h"


namespace AuthManager
{
    User CurrentUser();
    AuthResponse SignInUser();
    AuthResponse SignOutUser();
    AuthResponse IsAuthorized(std::string user_id, std::string role_id);
}