#include "PayoffDoubleDigital.h"

namespace mc {
    PAYOFFDLL_API PayoffDoubleDigital::PayoffDoubleDigital(const double lowLevel, const double upperLevel)
    :_lowLevel(lowLevel), _upperLevel(upperLevel)
    {
    }

    PAYOFFDLL_API const double PayoffDoubleDigital::operator()(const double spot) const 
    {
        if (spot <= _lowLevel) {
            return 0.0;
        }
        if (spot >= _upperLevel) {
            return 0.0;
        }

        return 1.0;
    }

}