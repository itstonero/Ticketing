#include "app.h"
#include "logger/logger.h"

int main() 
{
    
    LogDetail logDetail("Main", Information, "Application is starting up...");
    LogManager::log(logDetail);
}