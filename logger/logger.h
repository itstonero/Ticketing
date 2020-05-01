#include "../app.h"
#include "../shared/util_model.h"

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
            std::string to_string();
            LogDetail(std::string source, Level level, std::string message, std::string exception);
            LogDetail(std::string source, Level level, std::string message);
    };

    
    namespace LogManager
    {
        void log(LogDetail log);
    }
#endif