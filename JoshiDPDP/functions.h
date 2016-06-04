#pragma once


#ifdef DPDPLIBRARY_EXPORTS
#define FUNCTIONSDLL_API __declspec(dllexport) 
#else
#define FUNCTIONSDLL_API __declspec(dllimport) 
#endif


const FUNCTIONSDLL_API double simpleMonteCarlo1(const double expiry, 
    const double strike, const double spot, const double volatility, 
    const double interestrate, const size_t numberOfPath);


