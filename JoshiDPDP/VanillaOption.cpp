#include "VanillaOption.h"

namespace mc {
    DLL_API VanillaOption::VanillaOption(const PayoffBridge& payoff, const double maturity)
    :_payoffBridge(payoff), _maturity(maturity)
    {
    }
    
    DLL_API const double VanillaOption::getMaturity() const
    {
        return _maturity;
    }

    DLL_API const double VanillaOption::getPayoff(const double spot) const
    {
        return _payoffBridge(spot);
    }

    DLL_API VanillaOption& VanillaOption::operator= (const VanillaOption& original)
    {
        _maturity = original.getMaturity();
        _payoffBridge = original._payoffBridge;
        return *this;
    }

    DLL_API VanillaOption::~VanillaOption()
    {
    }

}