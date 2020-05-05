#include "logger.hpp"
#include <iostream>

const std::string logPath = "../../../logs/";


namespace LogManager
{
    void LogError(LogDetail log)
    {
        std::string today = Utils::GetLogDate();
        std::ofstream file(logPath+today+".log", std::ios::app);
        file << log.ToString() << "\n";
        file.close();
    
    }
    void LogWarn(LogDetail log)
    {
        std::string today = Utils::GetLogDate();
        std::ofstream file(logPath+today+".log", std::ios::app);
        file << log.ToString() << "\n";
        file.close();
    
    }
    void LogInfo(LogDetail log)
    {   
        std::cout << "Logging Information ..." << std::endl;

        std::string today = Utils::GetLogDate();
        std::ofstream file(logPath+today+".log", std::ios::app);
        file << log.ToString() << "\n";
        std::cout << "Today : " << today << std::endl;
        std::cout << "LogPath : " << logPath << std::endl;
        file.close();
    
    }
    void LogFatal(LogDetail log)
    {   
        std::string today = Utils::GetLogDate();
        std::ofstream file(logPath+today+".log", std::ios::app);
        file << log.ToString() << "\n";
        file.close();
    
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