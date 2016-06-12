#pragma once

#include "Payoff.h"

namespace mc {
    class PayoffCall : public Payoff {
    public:
        PAYOFFDLL_API PayoffCall(const double strike);
        PAYOFFDLL_API virtual const double operator()(double spot) const;
        virtual ~PayoffCall() {};

    private:
        const double _strike;
    };
}
