#pragma once
#include "Statistics.h"

namespace mc {
    class StatisticsMean : public Statistics {
    public:
        StatisticsMean();
        virtual void dumpOneResult(const double result);
        virtual boost::numeric::ublas::vector<boost::numeric::ublas::vector<double> > getResultSoFar() const;
        virtual Statistics* clone() const;

    private:
        double _sum;
        unsigned long _pathsDone;

    };
}
