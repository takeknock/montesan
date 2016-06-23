#pragma once

#include "ParametersInner.h"

#ifdef DPDPLIBRARY_EXPORTS
#define DLL_API __declspec(dllexport) 
#else
#define DLL_API __declspec(dllimport) 
#endif

namespace mc {

    class ParametersConstant : public ParametersInner {
    public:
        DLL_API ParametersConstant(const double constant);
        DLL_API virtual ParametersInner* clone() const;
        DLL_API virtual const double Integral(const double start, double end) const;
        DLL_API virtual const double IntegralSquare(const double start, double end) const;
        DLL_API virtual ~ParametersConstant();

    private:
        double _constant;
        double _constantSquare;

    };

}