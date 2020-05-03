#include "../../shared/headers/shared.h"
#include "../../models/headers/app_user_models.h"

#ifndef MAPPER
#define MAPPER
    namespace MapperManager
    {
        template <class TT, class TS>
        TT Map(TS source);

        template <class TT, class TS>
        void Map(TT *target, TS source);
    }
#endif