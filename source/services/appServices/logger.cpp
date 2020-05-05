#include "logger.hpp"

namespace LogManager
{
    void LogError(LogDetail log)
    {
        std::ofstream file(GetLogDate(), std::ios::app);
        file << log.ToString() << "\n";
        file.close();
    
    }
    void LogWarn(LogDetail log)
    {
        std::ofstream file(GetLogDate(), std::ios::app);
        file << log.ToString() << "\n";
        file.close();
    
    }
    void LogInfo(LogDetail log)
    {   
        std::ofstream file(GetLogDate(), std::ios::app);
        file << log.ToString() << "\n";
        file.close();
    
    }
    void LogFatal(LogDetail log)
    {   
        std::ofstream file(GetLogDate(), std::ios::app);
        file << log.ToString() << "\n";
        file.close();
    
    }

    std::string GetLogDate()
    {
        time_t given_time = time(NULL);
        tm *time = localtime(&given_time);
        std::string time_stamp = std::to_string(time->tm_year + 1900)+"_"+std::to_string(time->tm_mon + 1)+"_"+std::to_string(time->tm_mday)+"_log";
        return "logs/"+ time_stamp + ".log";
    }
}

std::string LogDetail::ToString()
{
    std::string result = ("Timestamp = "+ Utils::GetTimeStamp(this -> time_stamp) +" || Level = " + std::to_string( this -> level) + 
                            " || Source = "+ this -> source + " || UserID = " + this -> user_id + " || Message = " + this -> message + " || Exception = " + this -> exception);

    return result;
}

LogDetail::LogDetail(std::string user_id, std::string source, Level level, std::string message, std::string exception = "NULL")
{
    this -> source = source;
    this -> level = level;
    this -> message = message;
    this -> exception = exception;
    this -> time_stamp = time(0);
    this -> user_id = user_id;
}

LogDetail::LogDetail(std::string user_id, std::string source, Level level, std::string message)
{
    this -> source = source;
    this -> level = level;
    this -> message = message;
    this -> exception = "NONE";
    this -> time_stamp = time(0);
    this -> user_id = user_id;
}
