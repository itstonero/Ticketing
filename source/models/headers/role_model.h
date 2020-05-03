#include "../../shared/headers/util_model.h"

#ifndef ROLE_MODEL
#define ROLE_MODEL

    enum Roles { Worker, Administrator, SuperAdministrator, NotAssignedRole};
    class Role
    {

    };

    class RoleForCreation
    {
        public:
            ValidationSummary is_valid();
    };

    struct RoleResponse
    {
        Roles role;
    };

#endif