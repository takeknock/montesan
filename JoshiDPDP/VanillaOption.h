#pragma once
#include "PayoffBridge.h"

namespace mc {
    class VanillaOption {
    public:
        DLL_API VanillaOption(const PayoffBridge& payoff, const double maturity);
        DLL_API const double getMaturity() const;
        DLL_API VanillaOption& operator=(const VanillaOption& original);
        DLL_API const double getPayoff(const double spot) const;
        DLL_API ~VanillaOption();

    private:
        PayoffBridge _payoffBridge;
        double _maturity;
    };

} //namespace mc {