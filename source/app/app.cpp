#include "services/headers/core_services.h"
#include "controllers/headers/activity_controller.h"
#include "services/headers/database_services.h"
#include "services/headers/mapper_service.h"
#include "models/headers/app_user_models.h"

int main() 
{
    std::cout << "=============================\n> Device is Powering Up ... <\n=============================" << std::endl;
    bool app_running = AppService::InitializeAPP();


    UserForCreation user ("Anthony", "Asadu", "130, Ewusi Street, Makun, Sagamu, Ogun","asadu.anthony@yahoo.com", 2348160306958, "itstonero");
    User newUser = MapperManager::MapUserCreationToUser(user);
    std::cout << "User ID : " << newUser.user_id << std::endl;
    
    AppService::CloseAPP();    
    std::cout << "=============================\n> Device is Powering Off ...<\n=============================" << std::endl;
}
