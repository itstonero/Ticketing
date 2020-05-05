#include "headers/logger.h"

void log(LogDetail log)
{   
    std::string today = Utils::GetLogDate();
    std::ofstream file("logs/"+today+".log", std::ios::app);
    file << log.ToString() + "\n";
    file.close();
}
namespace LogManager
{
    void LogError(LogDetail log)
    {
        void log(LogDetail log);
        std::string today = Utils::GetLogDate();
        std::ofstream file("logs/"+today+".log", std::ios::app);
        file << log.ToString() + "\n";
        file.close();
    
    }
    void LogWarn(LogDetail log)
    {
        void log(LogDetail log);
        std::string today = Utils::GetLogDate();
        std::ofstream file("logs/"+today+".log", std::ios::app);
        file << log.ToString() + "\n";
        file.close();
    
    }
    void LogInfo(LogDetail log)
    {
        void log(LogDetail log);   
        std::string today = Utils::GetLogDate();
        std::ofstream file("logs/"+today+".log", std::ios::app);
        file << log.ToString() + "\n";
        file.close();
    
    }
    void LogFatal(LogDetail log);
}

std::string LogDetail::ToString()
{
    std::string result = ("Timestamp = "+ Utils::GetTimeStamp(this -> time_stamp) +" || Level = " + std::to_string( this -> level) + 
                            " || Source = "+ this -> source + " || UserID = " + this -> user_id + " || Message = " + this -> message + " || Exception = " + this -> exception);

    return result;
}

LogDetail::LogDetail(std::string source, Level level, std::string message, std::string exception = "NULL")
{
    User user = AuthManager::CurrentUser();
    this -> source = source;
    this -> level = level;
    this -> message = message;
    this -> exception = exception;
    this -> time_stamp = time(0);
    this -> user_id = user.user_id.size() == 0 ? "Anonymous" : user.user_id;
}
LogDetail::LogDetail(std::string source, Level level, std::string message)
{
    User user = AuthManager::CurrentUser();
    this -> source = source;
    this -> level = level;
    this -> message = message;
    this -> exception = "NONE";
    this -> time_stamp = time(0);
    this -> user_id = user.user_id.size() == 0 ? "Anonymous" : user.user_id;
}