#include <algorithm>
#include "PayoffPut.h"

namespace mc {
    PAYOFFDLL_API PayoffPut::PayoffPut(const double strike)
    :_strike(strike)
    {

    }

    PAYOFFDLL_API const double PayoffPut::operator()(const double spot) const
    {
        return std::max(_strike - spot, 0.0);
    }
}