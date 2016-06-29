#pragma once

#include <boost/numeric/ublas/matrix.hpp>

namespace mc {
    class Statistics {
        
    public:
        Statistics() {}

        
        virtual void DumpOneResule(const double result) = 0;
        virtual boost::numeric::ublas::vector<boost::numeric::ublas::vector<double> > getResultSofar() const = 0;
        virtual Statistics* clone() const = 0;
        virtual ~Statistics(){}

    private:

    };
}
