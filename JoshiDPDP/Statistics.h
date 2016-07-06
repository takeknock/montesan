#pragma once

#include <vector>
#include <boost/numeric/ublas/matrix.hpp>

#ifdef DPDPLIBRARY_EXPORTS
#define DLL_API __declspec(dllexport) 
#else
#define DLL_API __declspec(dllimport) 
#endif


namespace mc {
    class Statistics {
        
    public:
        Statistics() {}
        
        virtual void dumpOneResult(const double result) = 0;
        virtual std::vector<std::vector<double> > getResultsSoFar() const = 0;
        virtual Statistics* clone() const = 0;
        virtual ~Statistics(){}

    private:

    };
}
