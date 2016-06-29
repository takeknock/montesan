#include "StatisticsMean.h"

namespace mc {
    StatisticsMean::StatisticsMean()
    :_sum(0.0), _pathsDone(0.0)
    {

    }

    void StatisticsMean::dumpOneResult(const double result)
    {

    }

    boost::numeric::ublas::vector<boost::numeric::ublas::vector<double> > 
        StatisticsMean::getResultSoFar() const
    {

    }

    Statistics* StatisticsMean::clone() const
    {
        return new StatisticsMean(*this);
    }

}


