#include <appShared/util_model.hpp>

#ifndef ROLE_MODEL
#define ROLE_MODEL

    enum Roles { Worker, Administrator, SuperAdministrator, NotAssignedRole};
    class Role
    {

    };

    class RoleForCreation
    {
        public:
            ValidationSummary IsValid();
    };

    struct RoleResponse
    {
        Roles role;
    };

#endif