#include <appModels/app_user_models.hpp>
#include <appModels/auth_models.hpp>


namespace AuthManager
{
    User CurrentUser();
    AuthResponse SignInUser();
    AuthResponse SignOutUser();
    AuthResponse IsAuthorized(std::string user_id, std::string role_id);
}