#include <iostream>
#include "../JoshiDPDP/functions.h"
#include "../JoshiDPDP/PayoffCall.h"
#include "../JoshiDPDP/PayoffPut.h"
//#include "../JoshiDPDP/Payoff.h"

int main()
{
    const double maturity = 1.0;
    const double strike = 100.0;
    const double spot = 100.0;
    const double volatility = 0.2;
    const double interestRate = 0.01;
    const size_t numberOfPath = 10;
    const mc::PayoffCall callPayoff(strike);
    const mc::PayoffPut putPayoff(strike);
    const double callPrice = mc::simpleMonteCarlo(callPayoff, maturity, spot, volatility, interestRate, numberOfPath);
    const double putPrice = mc::simpleMonteCarlo(putPayoff, maturity, spot, volatility, interestRate, numberOfPath);
    std::cout << "the price of call option: " << callPrice << std::endl;
    std::cout << "the price of put option: " << putPrice << std::endl;


    double a;
    std::cin >> a;
    return 0;

    
}