#include "StatisticsMean.h"

namespace mc {
    namespace ublas = boost::numeric::ublas;

    DLL_API StatisticsMean::StatisticsMean()
    :_sum(0.0), _pathsDone(0UL)
    {

    }

    DLL_API void StatisticsMean::dumpOneResult(const double result)
    {
        _sum += result;
        ++_pathsDone;
    }

    DLL_API ublas::vector<ublas::vector<double> >
        StatisticsMean::getResultSoFar() const
    {
        ublas::vector<ublas::vector<double> > b(1);
        return b;
    }

    DLL_API Statistics* StatisticsMean::clone() const
    {
        return new StatisticsMean(*this);
    }

}


