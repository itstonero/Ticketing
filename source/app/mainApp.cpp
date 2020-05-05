#include <iostream>
#include <appServices/core_services.hpp>
#include <appControllers/activity_controller.hpp>

int main()
{
  std::cout << "==========================================\n\tApplication is starting up .. \n==========================================" << std::endl;
  bool appRunning = AppService::InitializeAPP();

  while(appRunning)
  {
    auto appState = ActivityManager::StartUI();
    appRunning = appState.IsSuccess;
  }

  std::cout << "==========================================\n\tApplication is shutting down ..\n==========================================" << std::endl;
  AppService::CloseAPP();
  return 0;
}