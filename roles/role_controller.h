#include "role_model.h"

#ifndef ROLE_MANAGER
#define ROLE_MANAGER

namespace RoleManager
{
    RoleResponse create_new_role(RoleForCreation role);
    RoleResponse remove_role(std::string role_id);
    RoleResponse add_user_to_role(std::string user_id, std::string role_id);
    RoleResponse remove_user_from_role(std::string user_id, std::string role_id);
}

#endif