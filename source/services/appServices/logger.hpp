#include <string>
#include <appShared/util_model.hpp>
#include <appModels/app_user_models.hpp>
#include <appControllers/auth_controller.hpp>
#include <boost/log/trivial.hpp>
#include <fstream>
#include <ctime>

#ifndef LOGGER
#define LOGGER

    enum Level {Error, Warning, Fatal, Information};
    
    class LogDetail
    {
        public:
            std::string message;
            time_t time_stamp;
            std::string exception;
            std::string source;
            Level level;
            std::string user_id;
            std::string ToString();
            LogDetail(std::string source, Level level, std::string message, std::string exception);
            LogDetail(std::string source, Level level, std::string message);
    };

    
    namespace LogManager
    {
        void LogError(LogDetail log);
        void LogWarn(LogDetail log);
        void LogInfo(LogDetail log);
        void LogFatal(LogDetail log);
    }
#endif