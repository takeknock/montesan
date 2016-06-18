#pragma once
#include "Payoff.h"

namespace mc {
    class VanillaOption {
    public:
        DLL_API VanillaOption(const Payoff& payoff, const double maturity);
        DLL_API const double getMaturity() const;
        DLL_API const double getPayoff(const double spot) const;

    private:
        const Payoff& _payoff;
        const double _maturity;
    };

} //namespace mc {