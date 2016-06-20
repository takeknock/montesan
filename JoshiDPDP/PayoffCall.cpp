#include "PayoffCall.h"
#include <algorithm>

namespace mc {
    DLL_API PayoffCall::PayoffCall(const double strike)
    :_strike(strike)
    {}

    const DLL_API double PayoffCall::operator()(const double spot) const
    {
        return std::max(spot - _strike, 0.0);
    }

    DLL_API const Payoff* PayoffCall::clone() const
    {
        return new PayoffCall(*this);
    }

}