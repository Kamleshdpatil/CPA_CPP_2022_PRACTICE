#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include"Date.h"

struct Date* create_date()
{
    struct Date* p_date = (struct Date*)calloc(1, sizeof(struct Date));
    assert(p_date!=NULL);
    return(p_date);
}

void init_date(struct Date* p_date, int dd, int mm, int yy)
{
    p_date->Day = dd;
    p_date->Month = mm;
    p_date->Year = yy;
}

int get_date(struct Date* p_date)
{
    return(p_date->Day);
}

int get_month(struct Date* p_date)
{
    return(p_date->Month);
}

int get_year(struct Date* p_date)
{
    return(p_date->Year);
}

int set_day(struct Date* p_date, int new_day)
{
    p_date->Day = new_day;
    return TRUE;
}

int set_month(struct Date* p_date, int new_month)
{
    p_date->Month = new_month;
    return TRUE;
}

int set_year(struct Date* p_date, int new_year)
{
    p_date->Year = new_year;
    return TRUE;
}

void show(struct Date* p_date)
{
    puts("************ THIS IS SHOW FUNCTION ************\n");
    printf("[%d]-[%d]-[%d]\n", p_date->Day, p_date->Month, p_date->Year);
}

void destroy_date(struct Date* p_date)
{
    free(p_date);
    p_date = NULL;
}

/* Not to be use by client directly, Only for internal Validation*/
static int validate_date(int dd, int mm, int yy)
{
    if((dd <= 31) && (mm <= 12) && (yy > 0))
    {
        puts("\n****** DATE VALIDATED SUCCESSFULLY ******\n");
        return TRUE;
    }
    return FALSE;
}