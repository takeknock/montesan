#pragma once

#include <boost/numeric/ublas/matrix.hpp>

#ifdef DPDPLIBRARY_EXPORTS
#define DLL_API __declspec(dllexport) 
#else
#define DLL_API __declspec(dllimport) 
#endif


namespace mc {
    namespace ublas = boost::numeric::ublas;
    class Statistics {
        
    public:
        Statistics() {}
        
        virtual void dumpOneResult(const double result) = 0;
        virtual ublas::vector<ublas::vector<double> > getResultSoFar() const = 0;
        virtual Statistics* clone() const = 0;
        virtual ~Statistics(){}

    private:

    };
}
