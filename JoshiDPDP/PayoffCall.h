#pragma once

#include "Payoff.h"

namespace mc {
    class PayoffCall : public Payoff {
    public:
        DLL_API PayoffCall(const double strike);
        DLL_API virtual const double operator()(double spot) const;
        DLL_API virtual const Payoff* clone() const;
        virtual ~PayoffCall() {};

    private:
        const double _strike;
    };
}
