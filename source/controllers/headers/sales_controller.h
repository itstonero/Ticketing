#include "../../models/headers/sales_models.h"

#ifndef SALES_CONTROLLER
#define SALES_CONTROLLER

    namespace SalesManager
    {
        SalesResponse generate_monthly_summary(SalesFilter filter, std::string staff_id);
        SalesResponse generate_year_summary(SalesFilter filter, std::string staff_id);
    }

#endif