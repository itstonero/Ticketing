#include <appShared/util_model.hpp>

#ifndef TICKET_MODEL
#define TICKET_MODEL

    class Ticket
    {
    };
    
    class TicketForCreation
    {
        public:
            ValidationSummary is_valid();
    };
    
    class TicketType
    {

    };

    class TicketTypeForCreation
    {
        public:
            ValidationSummary is_valid();
    };
    
    class TicketTypeForUpdate
    {

    };



    class TicketForDisplay
    {

    };

    class TicketTypeForDisplay
    {

    };
    
    struct TicketResponse
    {
        bool is_success;
        std::string message;
        std::vector<std::string> errors;
        TicketForDisplay ticket;
        TicketTypeForDisplay ticket_type;
    };

#endif