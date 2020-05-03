#include "../../shared/headers/shared.h"
#include "../../models/headers/app_user_models.h"
#include "../../models/headers/ticket_models.h"
#include "../../models/headers/role_model.h"
#include "../../services/headers/logger.h"

#ifndef REPOSITORY
#define REPOSITORY
    template<class T>
    std::vector<T> modelsWithPagingFromStore(int pageNumber, int pageSize);

    template<class T>
    T findMatchingEntityWithProvidedID(std::string entity_id);

    template<class T>
    void deleteMatchingEntity(T entity);

    template<class T>
    void updateMatchingEntity(T entity);


    template<class T>
    void insertMatchingEntity(T * entity);

    namespace Repository
    {
        template<class T>
        std::vector<T> RetrieveAll(int pageNumber, int pageSize);

        template<class T>
        T FindByID(std::string entity_id);
        
        template<class T>
        void DeleteEntity(T entity);

        template<class T>
        void InsertEntity(T *entity);

        template<class T>
        void UpdateEntity(T entity);

        bool SaveChanges();
    }
#endif