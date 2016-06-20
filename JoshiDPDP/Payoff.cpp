#include <algorithm>
#include "Payoff.h"

//namespace mc {
//    //PAYOFFDLL_API Payoff::Payoff(const double strike, const Payoff::OptionType theOptionType)
//    //:_strike(strike), _theOptionType(theOptionType)
//    //{    
//    //}
//
//    //const PAYOFFDLL_API double Payoff::operator()(const double spot) const
//    //{
//    //    switch (_theOptionType)
//    //    {
//    //    case call:
//    //        return std::max(spot - _strike, 0.0);
//    //    case put:
//    //        return std::max(_strike - spot, 0.0);
//    //    default:
//    //        throw("unknown type option found.");
//    //    }
//
//    //    //return _theOptionType == Payoff::OptionType::call ? std::max(spot - _strike, 0.0) : std::max(_strike - spot, 0.0);
//    //}
//
//} // namespace mc