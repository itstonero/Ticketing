#include <appModels/app_user_models.hpp>
#include "auth_service.hpp"


#ifndef MAPPER
#define MAPPER
    namespace MapperManager
    {
        User MapUserCreationToUser(UserForCreation source);

        template <class TT, class TS>
        TT Map(TS source);

        template <class TT, class TS>
        void Map(TT *target, TS source);
    }
#endif