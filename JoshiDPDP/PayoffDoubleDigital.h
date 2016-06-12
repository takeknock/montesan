#pragma once
#include "Payoff.h"

namespace mc {
    class PayoffDoubleDigital : public Payoff {
    public:
        PAYOFFDLL_API PayoffDoubleDigital(const double lowLevel, const double upperLevel);
        PAYOFFDLL_API virtual const double operator()(const double spot) const;
        virtual ~PayoffDoubleDigital() {};
    private:
        const double _lowLevel;
        const double _upperLevel;
    };
}
