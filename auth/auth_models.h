#include "../shared/util_model.h"
#include "../roles/role_model.h"
#include "../app.h"
#include <openssl/des.h>


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
            ValidationSummary is_valid();
    };

#endif