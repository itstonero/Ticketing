#include "role_controller.hpp"

namespace RoleManager
{
    RoleResponse CreateNewRole(RoleForCreation role)
    {
        RoleResponse response;
        response.role = Administrator;
        return response;
    }
    RoleResponse RemoveRole(std::string role_id)
    {
        RoleResponse response;
        response.role = Administrator;
        return response;
    }
    RoleResponse AddUserToRole(std::string user_id, std::string role_id)
    {
        RoleResponse response;
        response.role = Administrator;
        return response;
    }
    RoleResponse RemoveUserFromRole(std::string user_id, std::string role_id)
    {
        RoleResponse response;
        response.role = Administrator;
        return response;
    }
}