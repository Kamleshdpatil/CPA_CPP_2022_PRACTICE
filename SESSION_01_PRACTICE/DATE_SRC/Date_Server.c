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
    assert(is_validate_date(dd, mm, yy)); 
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
    assert(is_validate_date(new_day, p_date->Month, p_date->Year));
    p_date->Day = new_day;
    return TRUE;
}

int set_month(struct Date* p_date, int new_month)
{
    assert(is_validate_date(p_date->Day, new_month, p_date->Year));
    p_date->Month = new_month;
    return TRUE;
}

int set_year(struct Date* p_date, int new_year)
{
    assert(is_validate_date(p_date->Day, p_date->Month, new_year));
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
static int is_validate_date(int day, int month, int year)
{
    if(1000 <= year <= 3000)
       {
         if((month==1 || month==3 || month==5|| month==7|| month==8||month==10||month==12) && day>0 && day<=31)
            return TRUE;
         else 
            if(month==4 || month==6 || month==9|| month==11 && day>0 && day<=30)
                    return TRUE;
                else
                    if(month==2)
                    {
                        if((year%400==0 || (year%100!=0 && year%4==0)) && day>0 && day<=29)
                            return TRUE;
                        else if(day>0 && day<=28)
                            return TRUE;
                        else
                            return TRUE;
                    }
                    else
                        return FALSE;
        }
    else
        return FALSE;
}