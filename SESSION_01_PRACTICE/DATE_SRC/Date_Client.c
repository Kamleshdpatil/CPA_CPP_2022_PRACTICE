#include<stdio.h>
#include"Date.h"

int main()
{
    struct Date* p_today = create_date();

    init_date(p_today, 15, 12, 2022);
    show(p_today);

    printf("Date is: %d\n", get_date(p_today));
    printf("Month is: %d\n", get_month(p_today));
    printf("Year is: %d\n", get_year(p_today));

    //validate_date(15, 12, 2022);

    set_day(p_today, 15);
    set_month(p_today, 9);
    set_year(p_today, 1999);

    puts("\n********** AFTER SET FUNCTIONS CALL **********\n");
    show(p_today);

    destroy_date(p_today);
    p_today = NULL;
    
    puts("\n********** PROGRAM TERNINATED **********\n");

    exit(0);
}
