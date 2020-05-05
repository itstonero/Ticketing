#include <appShared/util_model.hpp>
#include "role_model.hpp"


#ifndef AUTH_MODEL
#define AUTH_MODEL
    class Token
    {

    };

    struct AuthResponse
    {
        Roles role = NotAssignedRole;
    };

    class SignInUser
    {
        public:
            ValidationSummary IsValid();
    };

    namespace AuthService
    {
        std::string EncryptData(std::string data);
        std::string DecryptData(std::string data);
    }
    
#endif