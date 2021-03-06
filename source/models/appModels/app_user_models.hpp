#include<string>
#include<ctime>
#include<vector>
#include<regex>
#include <appShared/util_model.hpp>

#ifndef APP_USER
#define APP_USER

    class User
    {
        public:
            std::string user_id;
            std::string first_name;
            std::string last_name;
            std::string contact_address;
            std::string email_address;
            double phone_number;
            std::string password_hash;
            bool locked_out = false;
            time_t lock_out_end_date;
    };

    class UserForCreation
    {
        public:
            std::string first_name;
            std::string last_name;
            std::string contact_address;
            std::string email_address;
            std::string password;
            double phone_number;

            std::string ToString();
            ValidationSummary IsValid();
            
            UserForCreation(std::string first, std::string last, std::string contact, std::string email, double number, std::string password);
    };

    class UserForUpdate
    {
        public:
            std::string user_id;
            std::string first_name;
            std::string last_name;
            std::string contact_address;
            std::string email_address;
            double phone_number;

            std::string ToString();
            ValidationSummary IsValid();
    };

    class UserForDisplay
    {
        public:
            std::string user_id;
            std::string first_name;
            std::string last_name;
            std::string contact_address;
            std::string email_address;
            double phone_number;
    };

    struct UserResponse
    {
        bool IsSuccess;
        std::string Message;
        std::vector<std::string> Errors;
        UserForDisplay User;
    };


#endif