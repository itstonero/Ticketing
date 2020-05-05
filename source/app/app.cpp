#include <appServices/core_services.hpp>
#include <appControllers/activity_controller.hpp>
#include <appServices/database_services.hpp>
#include <appServices/mapper_service.hpp>
#include <appModels/app_user_models.hpp>

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