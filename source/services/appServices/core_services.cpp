#include "core_services.hpp"

namespace AppService
{
    bool InitializeAPP()
    {
        LogDetail log("#####", "Core Services", Information, "Application Is Starting Up");
        LogManager::LogInfo(log);
        /*
            ++ TODO ++
                [1] Database Initialization
                [2] Session Initialization
        */
        return false;
    }

    void CloseAPP()
    {
        LogDetail log("#####", "Core Services", Information, "Application Is Shutting Down");
        LogManager::LogInfo(log);

        /*
            ++ TODO ++
                [1] Database Clean Up
                [2] Session Clean Up
        */
    }

}
