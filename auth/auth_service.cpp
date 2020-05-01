#include "auth_service.h"

int counter = 1; // TODO

namespace AuthService
{
    std::string generate_unique_id()
    {
        return std::to_string(++counter);
    }
    std::string generate_password_hash(std::string password)
    {
        return password;
    } 

}
