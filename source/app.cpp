#include "shared/headers/shared.h"
#include "services/headers/core_services.h"
#include "controllers/headers/activity_controller.h"

int main() 
{
    bool app_running = AppService::initialize_app();

    while (app_running)
    {
       auto response =  ActivityManager::StartUI();
       app_running = response.IsSuccess;
    }
    
    AppService::close_app();    
    
    std::cout << "Application is Starting Up" << std::endl;

}