#include "logger.h"
#include "../auth/auth_controller.h"

namespace LogManager
{
    void log(LogDetail log)
    {   
        std::string today = Utils::get_log_date();
        std::ofstream file("logs/"+today, std::ios::app);
        file << log.to_string() + "\n";
        file.close();
    }
}

std::string LogDetail::to_string()
{
    std::string result = ("Timestamp = "+ Utils::get_time_stamp(this -> time_stamp) +" || Level = " + std::to_string( this -> level) + 
                            " || Source = "+ this -> source + " || UserID = " + this -> user_id + " || Message = " + this -> message + " || Exception = " + this -> exception);

    return result;
}

LogDetail::LogDetail(std::string source, Level level, std::string message, std::string exception = "NULL")
{
    User user = AuthManager::get_signed_in_user();
    this -> source = source;
    this -> level = level;
    this -> message = message;
    this -> exception = exception;
    this -> time_stamp = time(0);
    this -> user_id = user.user_id.size() == 0 ? "Anonymous" : user.user_id;
}
LogDetail::LogDetail(std::string source, Level level, std::string message)
{
    User user = AuthManager::get_signed_in_user();
    this -> source = source;
    this -> level = level;
    this -> message = message;
    this -> exception = "NONE";
    this -> time_stamp = time(0);
    this -> user_id = user.user_id.size() == 0 ? "Anonymous" : user.user_id;
}