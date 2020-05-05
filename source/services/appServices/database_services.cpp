#include "database_services.hpp"

std::map<std::string, User> ALL_USERS;
std::map<std::string, Ticket> ALL_TICKETS;
std::map<std::string, TicketType> ALL_TICKETS_TYPES;
std::map<std::string, Role> ALL_ROLES;
std::map<std::string, LogDetail> ALL_LOGS;

std::map<std::string, User> TRANSACTIONAL_USERS;
std::map<std::string, Ticket> TRANSACTIONAL_TICKETS;
std::map<std::string, TicketType> TRANSACTIONAL_TICKETS_TYPES;
std::map<std::string, Role> TRANSACTIONAL_ROLES;
std::map<std::string, LogDetail> TRANSACTIONAL_LOGS;

namespace Repository
{
    template<class T>
    std::vector<T> RetrieveAll(int pageNumber, int pageSize)
    {
        return modelsWithPagingFromStore<T>(pageNumber, pageSize);
    }

    template<class T>
    T FindByID(std::string entity_id)
    {
        T match;

        return match;
    }
    
    template<class T>
    void DeleteEntity(T entity)
    {
        deleteMatchingEntity<T>(entity);
    }

    template<class T>
    void InsertEntity(T *entity)
    {
        insertMatchingEntity<T>(&entity);
    }

    template<class T>
    void UpdateEntity(T entity)
    {
        updateMatchingEntity<T>(entity);
    }

    bool SaveChanges()
    {
        return true;
    }
}


template<class T>
std::vector<T> modelsWithPagingFromStore(int pageNumber, int pageSize)
{
    auto className = typeid(T).name;
    std::vector<T> Matches;
    return Matches;
}

template<class T>
T findMatchingEntityWithProvidedID(std::string entity_id)
{
    auto className = typeid(T).name;
}

template<class T>
void deleteMatchingEntity(T entity)
{
    auto className = typeid(T).name;
}

template<class T>
void updateMatchingEntity(T entity)
{
    auto className = typeid(T).name;
}


template<class T>
void insertMatchingEntity(T * entity)
{
    auto className = typeid(T).name;
}


