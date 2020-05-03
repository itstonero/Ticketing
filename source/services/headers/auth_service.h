#include "../../shared/headers/shared.h"

#ifndef AUTH_SERVICE
#define AUTH_SERVICE

namespace AuthService
{
    std::string generate_unique_id();
    std::string generate_password_hash(std::string password);
}

#endif