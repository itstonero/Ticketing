#include "headers/mapper_service.h"
#include "../../models/headers/app_user_models.h"

namespace MapperManager
{
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
    return user;
}


void ConvertModel(User *target, UserForCreation toCreate)
{

}