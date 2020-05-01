#include "auth_models.h"
#include "../user/app_user_models.h"


namespace AuthManager
{
    User get_signed_in_user();
    AuthResponse sign_in_user();
    AuthResponse sign_out_user();
    AuthResponse is_authorized(std::string user_id, std::string role_id);
}