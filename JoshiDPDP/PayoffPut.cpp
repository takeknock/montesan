#include <algorithm>
#include "PayoffPut.h"

namespace mc {
    DLL_API PayoffPut::PayoffPut(const double strike)
    :_strike(strike)
    {

    }

    DLL_API const double PayoffPut::operator()(const double spot) const
    {
        return std::max(_strike - spot, 0.0);
    }

    DLL_API Payoff* PayoffPut::clone() const
    {
        return new PayoffPut(*this);
    }
}