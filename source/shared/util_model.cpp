#include "headers/shared.h"

namespace Utils
{

    std::string GetTimeStamp(time_t given_time)
    {
        tm *time = localtime(&given_time);
        std::string time_stamp = std::to_string(time->tm_year+1900)+"/"+std::to_string(time->tm_mon+1)+"/"+std::to_string(time->tm_mday)
                                +"TT"+std::to_string(time->tm_hour)+":"+std::to_string(time->tm_min)+":"+std::to_string(time->tm_sec);

        return time_stamp;
    }

    std::string GetLogDate()
    {
        time_t given_time = time(NULL);
        tm *time = localtime(&given_time);
        std::string time_stamp = std::to_string(time->tm_year + 1900)+"_"+std::to_string(time->tm_mon + 1)+"_"+std::to_string(time->tm_mday)+"_log";
        return time_stamp;
    }

}