
#include "activity_controller.h"

namespace ActivityManager
{
    ActivityResponse start_ticketing()
    {
        auto response = handle_power_on();
        if(!response.is_success)
        {
            return response;
        }

        Roles user = NotAssignedRole;
        while(user == NotAssignedRole)
        {
            AuthResponse current_user = AuthManager::sign_in_user();
            user = current_user.role;

            switch(user)
            {
                case Worker:
                    WorkerActivity::display_dashboard();
                    break;
                case Administrator:
                    AdminActivity::display_dashboard();
                    break;
                case SuperAdministrator:
                    SuperAdminActivity::display_dashboard();
                    break;
            }

        }

        response = handle_power_off();
        if(!response.is_success)
        {
            return response;
        }
    }
}

ActivityResponse handle_power_on()
{

}


ActivityResponse handle_power_off()
{
}