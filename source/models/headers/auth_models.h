
#include "../../shared/headers/shared.h"
#include "../../shared/headers/util_model.h"
#include "../../models/headers/role_model.h"


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