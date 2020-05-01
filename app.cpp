#include "app.h"
#include "logger/logger.h"

int main() 
{
    
    LogDetail logDetail("Main", Error, "Application is starting up...");
    LogManager::log(logDetail);
}