#include <iostream>
#include "../JoshiDPDP/functions.h"

int main()
{
    const double maturity = 1.0;
    const double strike = 1.0;
    const double spot = 100.0;
    const double volatility = 0.2;
    const double interestRate = 0.1;
    const size_t numberOfPath = 10;
    const double price = simpleMonteCarlo1(maturity, strike, spot, volatility, interestRate, numberOfPath);
    std::cout << price << std::endl;



    double a;
    std::cin >> a;
    return 0;

    
}