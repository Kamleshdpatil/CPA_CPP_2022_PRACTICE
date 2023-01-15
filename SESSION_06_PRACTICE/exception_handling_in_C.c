#include<stdio.h>
#include<stdlib.h>
#include<setjmp.h>

#define ERROR_NUMBER_CODE   2

jmp_buf jmpBuffer;

double cpa_sqrt(double x);

int main(void)
{
    double dSqrt_x = 0;
    int iRet = 0;

    iRet = setjmp(jmpBuffer);
    if(iRet == ERROR_NUMBER_CODE)
    {
        printf("Squar root of negetive number cannot be computed\n");
        printf("Survived\n");

        goto outHere;
    }

    dSqrt_x = cpa_sqrt(-20);

    outHere:
        printf("Moving forward\n");
    
    exit(0);
}

double cpa_sqrt(double x)
{
    if(x < 0)
    {
        longjmp(jmpBuffer, ERROR_NUMBER_CODE);
    }

    return(0.0);
}

