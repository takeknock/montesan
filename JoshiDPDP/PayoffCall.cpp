#include "PayoffCall.h"
#include <algorithm>

namespace mc {
    PAYOFFDLL_API PayoffCall::PayoffCall(const double strike)
    :_strike(strike)
    {}

    const PAYOFFDLL_API double PayoffCall::operator()(const double spot) const
    {
        return std::max(spot - _strike, 0.0);
    }
}