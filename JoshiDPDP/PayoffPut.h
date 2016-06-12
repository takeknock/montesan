#pragma once
#include "Payoff.h"

namespace mc {
    class PayoffPut : public Payoff {
    public:
        PAYOFFDLL_API PayoffPut(const double strike);
        virtual PAYOFFDLL_API const double operator()(const double spot) const;
        virtual ~PayoffPut() {};

    private:
        const double _strike;

    };
}
