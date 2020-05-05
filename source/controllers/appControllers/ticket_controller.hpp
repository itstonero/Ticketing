#include <appModels/ticket_models.hpp>

#ifndef TICKET_CONTROLLER
#define TICKET_CONTROLLER
    namespace TicketManager
    {
        TicketResponse GenerateTicket(TicketForCreation ticket);
        TicketResponse RevertTicket(TicketForCreation ticket);
        TicketResponse DeleteTicket(std::string ticket_id);
        TicketResponse GenerateTicketType(TicketTypeForCreation ticket_type);
        TicketResponse UpdateTicketType(TicketTypeForUpdate ticket_type);
        TicketResponse RemoveTicketType(std::string ticket_type_id);
    }
#endif