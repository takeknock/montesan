#pragma once
#include "Payoff.h"
#include "VanillaOption.h"
#include "Parameters.h"
#include "Statistics.h"

#ifdef DPDPLIBRARY_EXPORTS
#define FUNCTIONSDLL_API __declspec(dllexport) 
#else
#define FUNCTIONSDLL_API __declspec(dllimport) 
#endif

namespace mc {
    const FUNCTIONSDLL_API double simpleMonteCarlo(
        const VanillaOption& vanillaOption, 
        const double spot, const Parameters& volatility,
        const Parameters& interestrate, const size_t numberOfPath,
        Statistics& gatherer);

}//namespace mcf {



