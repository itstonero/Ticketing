#include "headers/auth_service.h"

int counter = 1; // TODO

namespace AuthService
{
    std::string GenerateUniqueID()
    {
        return std::to_string(++counter);
    }
    std::string GeneratePasswordHash(std::string password)
    {
        return password;
    } 

}
