#include "shared/headers/shared.h"
#include "services/headers/core_services.h"
#include "controllers/headers/activity_controller.h"
#include <iostream>

int main() 
{
    bool app_running = AppService::InitializeAPP();
    /*

    while (app_running)
    {
       auto response =  ActivityManager::StartUI();
       app_running = response.IsSuccess;
    }
    
    AppService::CloseAPP();    
    */
    std::cout << "Application is Starting Up ? " << std::boolalpha << app_running << std::endl;

}