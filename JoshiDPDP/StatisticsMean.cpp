#include "StatisticsMean.h"

namespace mc {

    DLL_API StatisticsMean::StatisticsMean()
    :_sum(0.0), _pathsDone(0UL)
    {

    }

    DLL_API void StatisticsMean::dumpOneResult(const double result)
    {
        _sum += result;
        ++_pathsDone;
    }

    DLL_API std::vector<std::vector<double> >
        StatisticsMean::getResultsSoFar() const
    {
        std::vector<std::vector<double> > results(1);

        results[0].resize(1);
        results[0][0] = _sum / _pathsDone;
        return results;
    }

    DLL_API Statistics* StatisticsMean::clone() const
    {
        return new StatisticsMean(*this);
    }

}


