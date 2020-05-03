#include "../../models/headers/sales_models.h"

#ifndef SALES_CONTROLLER
#define SALES_CONTROLLER

    namespace SalesManager
    {
        SalesResponse GenerateMonthSummary(SalesFilter filter, std::string staff_id);
        SalesResponse GenerateYearSummary(SalesFilter filter, std::string staff_id);
    }

#endif