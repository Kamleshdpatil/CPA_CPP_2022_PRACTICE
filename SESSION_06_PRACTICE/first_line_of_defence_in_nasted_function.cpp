#include<iostream>
#include<stdexcept>
#include<cmath>

double f(double x);
double f1(double x);
double f2(double x);
double cpa_sqrt(double x);

int main(void)
{
    double x;
    double sqrt_x;
    std::cout << "Enter non negetive number to find the square root: ";
    std::cin >> x;

    sqrt_x = f(x);
    std::cout << "sqrt(x):"<< sqrt_x << std::endl;

    return(EXIT_SUCCESS);
}

double f(double x)
{
    double sqrt_x;

    sqrt_x = f1(x);

    return sqrt_x;
}

double f1(double x)
{
    double rs= 0.0;
    try{
        rs = f2(x);
    }
    catch(const std::exception& ref)
    {
        std::cout << "Second line of defence succesfull" << std::endl;
        std::cout << ref.what() <<std::endl;
        return(NAN);
    }

    return(rs);
}

double f2(double x)
{
    double rs= 0.0;

    rs = cpa_sqrt(x);

    return(rs);
}

double cpa_sqrt(double x)
{
    if(x < 0)
        throw std::domain_error("Squar root of negetive number is not double");

    return sqrt(x);
}

