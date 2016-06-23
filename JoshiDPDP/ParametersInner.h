#pragma once

#ifdef DPDPLIBRARY_EXPORTS
#define DLL_API __declspec(dllexport) 
#else
#define DLL_API __declspec(dllimport) 
#endif

namespace mc {

    class ParametersInner {
    public:

        virtual ParametersInner* clone() const = 0;
        virtual const double Integral(
            const double start, const double end) const = 0;
        virtual const double IntegralSquare(
            const double start, const double end) const = 0;
        virtual ~ParametersInner();
    };

}