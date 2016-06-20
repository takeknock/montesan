#pragma once
#include "Payoff.h"

namespace mc {
    class PayoffDoubleDigital : public Payoff {
    public:
        DLL_API PayoffDoubleDigital(const double lowLevel, const double upperLevel);
        DLL_API virtual const double operator()(const double spot) const;
        DLL_API virtual const Payoff* clone() const;
        virtual ~PayoffDoubleDigital() {};
    private:
        const double _lowLevel;
        const double _upperLevel;
    };
}
