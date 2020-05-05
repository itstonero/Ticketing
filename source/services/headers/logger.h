#include "../../shared/headers/util_model.h"
#include "../../controllers/headers/auth_controller.h"
#include "../../shared/headers/shared.h"
#include <boost/log/trivial.hpp>

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