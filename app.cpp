#include "app.h"
#include "core/core_services.h"
#include "activity/activity_controller.h"

int main() 
{
    bool app_running = AppService::initialize_app();

    while (app_running)
    {
       ActivityResponse response =  ActivityManager::start_ticketing();
       app_running = response.is_success;
    }
    
    AppService::close_app();
}