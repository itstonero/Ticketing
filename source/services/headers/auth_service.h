#include "../../shared/headers/shared.h"
#include <openssl/des.h>
#include <boost/uuid/uuid.hpp>            
#include <boost/uuid/uuid_generators.hpp> 
#include <boost/uuid/uuid_io.hpp>         

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