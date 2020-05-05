#include <iostream>
#include <appServices/core_services.hpp>
#include <appControllers/activity_controller.hpp>

int main()
{
  bool appRunning = AppService::InitializeAPP();

  while(appRunning)
  {
    auto appState = ActivityManager::StartUI();
    appRunning = appState.IsSuccess;
  }

  AppService::CloseAPP();
  return 0;
}