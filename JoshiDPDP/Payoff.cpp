#include "Payoff.h"

namespace mc {
    PAYOFFDLL_API Payoff::Payoff(const double strike, const Payoff::OptionType theOptionType)
    :_strike(strike), _theOptionType(theOptionType)
    {    
    }

    const PAYOFFDLL_API double Payoff::operator()(const double spot) const
    {

        return _theOptionType == Payoff::OptionType::call ? spot - _strike : _strike - spot;
    }

} // namespace mc