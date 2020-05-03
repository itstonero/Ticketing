#include "../../shared/headers/shared.h"

#ifndef AUTH_SERVICE
#define AUTH_SERVICE

namespace AuthService
{
    std::string GenerateUniqueID();
    std::string GeneratePasswordHash(std::string password);
    std::string EncryptData(std::string plainText);
    std::string DecryptData(std::string cipher);
}

#endif