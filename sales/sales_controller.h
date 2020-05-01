#include "sales_models.h"

namespace SalesManager
{
    SalesResponse generate_monthly_summary(SalesFilter filter, std::string staff_id);
    SalesResponse generate_year_summary(SalesFilter filter, std::string staff_id);
}