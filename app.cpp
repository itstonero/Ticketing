#include "app.h"
#include "core/core_services.h"
#include "activity/activity_controller.h"

int main() 
{
    bool app_running = AppService::initialize_app();

    while (app_running)
    {
        ActivityManager::start_ticketing(&app_running);
    }
    
    AppService::close_app();
}