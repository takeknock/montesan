#pragma once

#include <vector>

#include "Statistics.h"
#include "Wrapper.h"



namespace mc {
    namespace ublas = boost::numeric::ublas;
    class ConvergenceTable : public Statistics {
    public:
        DLL_API ConvergenceTable(const Wrapper<Statistics>& gatherer);

        DLL_API virtual Statistics* clone() const;
        DLL_API virtual void dumpOneResult(double result);
        DLL_API virtual std::vector<std::vector<double> > getResultsSoFar() const;

    private:
        Wrapper<Statistics> _gatherer;
        std::vector<std::vector<double> > _resultsSoFar;
        unsigned long _stoppingPoint;
        unsigned long _pathsDone;

    };

}

