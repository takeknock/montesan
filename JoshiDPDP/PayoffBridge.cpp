#include "PayoffBridge.h"

namespace mc {
    DLL_API PayoffBridge::PayoffBridge(const PayoffBridge& original)
    {
        _payoff = original._payoff->clone();
    }

    DLL_API PayoffBridge::PayoffBridge(const Payoff& innerPayoff)
    {
        _payoff = innerPayoff.clone();
    }

    DLL_API double PayoffBridge::operator()(const double spot) const
    {
        return _payoff->operator()(spot);
    }

    DLL_API PayoffBridge::~PayoffBridge()
    {

    }

    DLL_API PayoffBridge& PayoffBridge::operator=(const PayoffBridge& original)
    {
        _payoff = original._payoff->clone();
        return *this;
    }

}