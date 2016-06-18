#include "VanillaOption.h"

namespace mc {
    DLL_API VanillaOption::VanillaOption(const Payoff& payoff, const double maturity)
    :_payoff(payoff), _maturity(maturity)
    {}
    
    DLL_API const double VanillaOption::getMaturity() const
    {
        return _maturity;
    }

    DLL_API const double VanillaOption::getPayoff(const double spot) const
    {
        return _payoff(spot);
    }


}