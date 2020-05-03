#include "../../models/headers/role_model.h"

#ifndef ROLE_MANAGER
#define ROLE_MANAGER

    namespace RoleManager
    {
        RoleResponse CreateNewRole(RoleForCreation role);
        RoleResponse RemoveRole(std::string role_id);
        RoleResponse AddUserToRole(std::string user_id, std::string role_id);
        RoleResponse RemoveUserFromRole(std::string user_id, std::string role_id);
    }

#endif