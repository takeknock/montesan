#include "VanillaOption.h"

namespace mc {
    DLL_API VanillaOption::VanillaOption(const Payoff& payoff, const double maturity)
    :_maturity(maturity)
    {
        _payoff = payoff.clone();   
    }
    
    DLL_API const double VanillaOption::getMaturity() const
    {
        return _maturity;
    }

    DLL_API const double VanillaOption::getPayoff(const double spot) const
    {
        return _payoff->operator()(spot);
    }

    DLL_API VanillaOption& VanillaOption::operator= (const VanillaOption& original)
    {
        _maturity = original.getMaturity();
        _payoff = original._payoff->clone();
        return *this;
    }

    DLL_API VanillaOption::~VanillaOption()
    {
        delete _payoff;
    }

}