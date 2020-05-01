#include "ticket_models.h"

#ifndef TICKET_CONTROLLER
#define TICKET_CONTROLLER
namespace TicketManager
{
    TicketResponse generate_ticket(TicketForCreation ticket);
    TicketResponse revert_ticket_sales(TicketForCreation ticket);
    TicketResponse delete_ticket(std::string ticket_id);
    TicketResponse generate_ticket_type(TicketTypeForCreation ticket_type);
    TicketResponse update_ticket_type(TicketTypeForUpdate ticket_type);
    TicketResponse remove_ticket_type(std::string ticket_type_id);
}
#endif