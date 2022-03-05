#include <studio.h>
#include <math.h>
float calculate_compound_intrest(int init_amount_of_investment, int annual_intrest_rate, int number_of_times_it_gives_compound_intrest_per_year, int number_of_years)
{
    int final_amount = pow(init_amount_of_investment * (1 + (annual_intrest_rate / 100.0) / number_of_times_it_gives_compound_intrest_per_year), number_of_times_it_gives_compound_intrest_per_year * number_of_years);
    return final_amount;
}
