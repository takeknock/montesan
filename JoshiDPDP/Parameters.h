#pragma once

#include "ParametersInner.h"

#ifdef DPDPLIBRARY_EXPORTS
#define DLL_API __declspec(dllexport) 
#else
#define DLL_API __declspec(dllimport) 
#endif


namespace mc {

    class Parameters {
    public:
        DLL_API Parameters(const ParametersInner& innerParameter);
        DLL_API Parameters(const Parameters& original); // copy constructor
        DLL_API Parameters& operator=(const Parameters& original);
        DLL_API virtual ~Parameters();
        DLL_API inline const double Integral(double start, double end) const;
        DLL_API inline const double IntegralSquare(double start, double end) const;

        DLL_API const double calculateMean(double start, double end) const;
        DLL_API const double calculateRootMeanSquare(double start, double end) const;

    private:
        ParametersInner* _innerObjectPtr;
    };

    inline const double Parameters::Integral(double start, double end) const
    {
        return _innerObjectPtr->Integral(start, end);
    }
    inline const double Parameters::IntegralSquare(double start, double end) const
    {
        return _innerObjectPtr->IntegralSquare(start, end);
    }
}

