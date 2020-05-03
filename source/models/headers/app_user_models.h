#include "../../shared/headers/shared.h"
#include "../../shared/headers/util_model.h"

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

            std::string to_string();
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

            std::string to_string();
            ValidationSummary is_valid();
            
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

            std::string to_string();
            ValidationSummary is_valid();
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
        bool is_success;
        std::string message;
        std::vector<std::string> errors;
        UserForDisplay user;
    };


#endif