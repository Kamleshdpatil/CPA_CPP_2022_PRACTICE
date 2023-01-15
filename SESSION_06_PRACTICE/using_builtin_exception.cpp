#include<iostream>
#include<stdexcept>

double cpa_sqrt(double x);

int main(void)
{
    double x;
    double sqrt_x;

    std::cout << "Enter a non-negetive number to find the squar root: "<<std::endl;
    std::cin>> x;
    try
    {
        sqrt_x = cpa_sqrt(x);
        std::cout<<"Squar root("<< x << ") = " << sqrt_x << std::endl;
    }
    catch(const std::exception& ref)
    {
        std::cout<<"In catch block" << std::endl;
        std::cout<<"Survied" << std::endl;
    }

    std::cout<<"Moving forward"<< std::endl;

    return(EXIT_SUCCESS);
}

double cpa_sqrt(double x)
{
    if(x < 0)
    {
        throw std::domain_error("Square root of negetive number is not double");
    }

    return 0.0;
}
