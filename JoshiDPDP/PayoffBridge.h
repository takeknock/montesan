#pragma once

#include "Payoff.h"

namespace mc {
    class PayoffBridge {
    public:
        DLL_API PayoffBridge(const PayoffBridge& original);
        DLL_API PayoffBridge(const Payoff& innerPayoff);

        DLL_API inline double operator()(const double spot) const;
        DLL_API ~PayoffBridge();
        DLL_API PayoffBridge& operator=(const PayoffBridge& original);

    private:
        Payoff* _payoff;

    };

}
