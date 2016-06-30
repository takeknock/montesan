#pragma once
#include "Statistics.h"


namespace mc {
    namespace ublas = boost::numeric::ublas;
    class StatisticsMean : public Statistics {
    public:
        DLL_API StatisticsMean();
        DLL_API virtual void dumpOneResult(const double result);
        DLL_API virtual ublas::vector<ublas::vector<double> > getResultSoFar() const;
        DLL_API virtual Statistics* clone() const;


    private:
        double _sum;
        unsigned long _pathsDone;
        //inline double getSum() const { return _sum; }
        //inline unsigned long getPathsDone() const { return _pathsDone; }
    };
}
