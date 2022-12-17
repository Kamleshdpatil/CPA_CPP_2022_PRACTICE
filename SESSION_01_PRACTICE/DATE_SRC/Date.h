#ifndef _DATE_H
#define _DATE_H

#define         TRUE        1
#define         FALSE       0

struct Date
{
    int Day;
    int Month;
    int Year;
};

struct Date* create_date();

void init_date(struct Date* p_date, int dd, int mm, int yy);

int get_date(struct Date* p_date);
int get_month(struct Date* p_date);
int get_year(struct Date* p_date);

int set_day(struct Date* p_date, int new_day);
int set_month(struct Date* p_date, int new_month);
int set_year(struct Date* p_date, int new_year);

void show(struct Date* p_date);
void destroy_date(struct Date* p_date);

/* Not to be use by client directly, Only for internal Validation*/
static int validate_date(int dd, int mm, int yy);

#endif /* _DATE_H */
