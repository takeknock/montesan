#pragma once
#include "Payoff.h"

namespace mc {
    class PayoffPut : public Payoff {
    public:
        DLL_API PayoffPut(const double strike);
        virtual DLL_API const double operator()(const double spot) const;
        DLL_API virtual Payoff* clone() const;
        virtual ~PayoffPut() {};

    private:
        const double _strike;

    };
}
