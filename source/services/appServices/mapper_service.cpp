#include "mapper_service.hpp"

namespace MapperManager
{
    User MapUserCreationToUser(UserForCreation toCreate)
    {
        User user;
        user.contact_address = toCreate.contact_address;
        user.email_address = toCreate.email_address;
        user.first_name = toCreate.first_name;
        user.last_name = toCreate.last_name;
        user.phone_number = toCreate.phone_number;
        user.locked_out = false;
        user.user_id = AuthService::GenerateUniqueID();
        return user;
    }

    template <class TT, class TS>
    TT Map(TS source)
    {
        return convertModel(source);
    }

    template <class TT, class TS>
    void Map(TT * target, TS source)
    {
        ConvertModel(&target, source);
    }
}

User ConvertModel(UserForCreation toCreate)
{
    User user;
    user.contact_address = toCreate.contact_address;
    user.email_address = toCreate.email_address;
    user.first_name = toCreate.first_name;
    user.last_name = toCreate.last_name;
    user.phone_number = toCreate.phone_number;
    user.locked_out = false;
    user.user_id = AuthService::GenerateUniqueID();
    return user;
}


void ConvertModel(User *target, UserForCreation toCreate)
{

}