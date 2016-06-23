
#include "ParametersConstant.h"

namespace mc {

    DLL_API ParametersConstant::ParametersConstant(const double constant)
    :_constant(constant), _constantSquare(constant * constant)
    {
    }

    DLL_API ParametersInner* ParametersConstant::clone() const
    {
        return new ParametersConstant(*this);
    }

    DLL_API const double ParametersConstant::Integral(const double start, const double end) const
    {
        return (end - start) * _constant;
    }

    DLL_API const double ParametersConstant::IntegralSquare(const double start, const double end) const
    {
        return (end - start) * _constantSquare;
    }

    DLL_API ParametersConstant::~ParametersConstant()
    {

    }
    
}