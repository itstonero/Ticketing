#include "services/headers/core_services.h"
#include "controllers/headers/activity_controller.h"
#include "services/headers/auth_service.h"

int main() 
{
    std::cout << "=============================\n> Device is Powering Up ... <\n=============================" << std::endl;
    bool app_running = AppService::InitializeAPP();

    while (app_running)
    {
       auto response =  ActivityManager::StartUI();
       app_running = response.IsSuccess;
    }

    
    AppService::CloseAPP();    
    std::cout << "=============================\n> Device is Powering Off ...<\n=============================" << std::endl;

}