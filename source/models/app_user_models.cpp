#include "headers/app_user_models.h"

const std::regex pattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");


ValidationSummary UserForCreation::IsValid()
{
    ValidationSummary result;
    bool current_validation = this -> first_name.size() > 2 && this -> first_name.size() < 25;
    result.is_valid = current_validation;
    if(!current_validation)
    {
        result.errors.push_back("First Name Must Be Within 2 to 25 characters long");
    }

    current_validation = this -> last_name.size() > 2 && this -> last_name.size() < 25;
    result.is_valid = result.is_valid && current_validation;
    if(!current_validation)
    {
        result.errors.push_back("Last Name Must Be Within 2 to 25 characters long");
    }


    current_validation = std::to_string(this -> phone_number).substr(0, 13).size() == 13 && std::to_string(this -> phone_number).substr(0, 3) == "234";
    result.is_valid = result.is_valid && current_validation;
    if(!current_validation)
    {
        result.errors.push_back("Phone Number Must Start with 234.");
    }

    current_validation = this -> contact_address.size() >= 15 && this -> contact_address.size() <= 150;
    result.is_valid = result.is_valid && current_validation;
    if(!current_validation)
    {
        result.errors.push_back("Contact Address Must Contain 15 - 150 characters long");
    }

    current_validation = std::regex_match(this -> email_address, pattern);
    result.is_valid = result.is_valid && current_validation;
    if(!current_validation)
    {
        result.errors.push_back("Email Address Provided Is Not Valid");
    }

    return result;
}

std::string UserForCreation::ToString()
{
    std::string result = "Name = " + this->first_name + " " + this->last_name + ";"
                        + "Contact Address = " + this->contact_address + ";"
                        + "Email = " + this->email_address + ";"
                        + "Phone Number = " + std::to_string(this->phone_number).substr(0, 13) + ";";
    return result;
}

UserForCreation::UserForCreation(std::string first, std::string last, std::string contact, std::string email, double number, std::string password)
{
    this -> first_name = first;
    this -> last_name = last;
    this -> contact_address = contact;
    this -> email_address = email;
    this -> phone_number = number;
    this -> password = password;
}

ValidationSummary UserForUpdate::IsValid()
{
    ValidationSummary result;
    bool current_validation = this -> first_name.size() > 2 && this -> first_name.size() < 25;
    result.is_valid = current_validation;
    if(!current_validation)
    {
        result.errors.push_back("First Name Must Be Within 2 to 25 characters long");
    }

    current_validation = this -> last_name.size() > 2 && this -> last_name.size() < 25;
    result.is_valid = result.is_valid && current_validation;
    if(!current_validation)
    {
        result.errors.push_back("Last Name Must Be Within 2 to 25 characters long");
    }


    current_validation = std::to_string(this -> phone_number).substr(0, 13).size() == 13 && std::to_string(this -> phone_number).substr(0, 3) == "234";
    result.is_valid = result.is_valid && current_validation;
    if(!current_validation)
    {
        result.errors.push_back("Phone Number Must Start with 234.");
    }

    current_validation = this -> contact_address.size() >= 15 && this -> contact_address.size() <= 150;
    result.is_valid = result.is_valid && current_validation;
    if(!current_validation)
    {
        result.errors.push_back("Contact Address Must Contain 15 - 150 characters long");
    }

    current_validation = std::regex_match(this -> email_address, pattern);
    result.is_valid = result.is_valid && current_validation;
    if(!current_validation)
    {
        result.errors.push_back("Email Address Provided Is Not Valid");
    }

    return result;
}

std::string UserForUpdate::ToString()
{
    std::string result = "Name = " + this->first_name + " " + this->last_name + ";"
                        + "Contact Address = " + this->contact_address + ";"
                        + "Email = " + this->email_address + ";"
                        + "Phone Number = " + std::to_string(this->phone_number).substr(0, 13) + ";";
    return result;
}