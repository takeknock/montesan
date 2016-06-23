#include "Parameters.h"

namespace mc {

    DLL_API Parameters::Parameters(const ParametersInner& innerParameter)
    {
        _innerObjectPtr = innerParameter.clone();
    }

    DLL_API Parameters::Parameters(const Parameters& original)
    {
    }

    DLL_API Parameters& Parameters::operator=(const Parameters& original)
    {
        _innerObjectPtr = original._innerObjectPtr->clone();
        return *this;
    }

    DLL_API Parameters::~Parameters() 
    {
        delete _innerObjectPtr;
    }

    DLL_API const double Parameters::calculateMean(double start, double end) const
    {
        double total = Integral(start, end);
        return total / (end - start);
    }

    DLL_API const double Parameters::calculateRootMeanSquare(double start, double end) const
    {
        double total = IntegralSquare(start, end);
        return total / (end - start);
    }

}