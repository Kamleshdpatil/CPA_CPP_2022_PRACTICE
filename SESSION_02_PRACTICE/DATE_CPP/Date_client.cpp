#include "Date.hpp"

int main(void)
{
    Date* pDate = new Date(10, 1, 1999);

    pDate->show();

    pDate->set_day(15);
    pDate->set_month(9);
    pDate->set_year(1999);

    pDate->show();

    delete pDate;
    pDate = nullptr;

    return(0);
}