#include "ConvergenceTable.h"

namespace mc {
    namespace ublas = boost::numeric::ublas;
    ConvergenceTable::ConvergenceTable(const Wrapper<Statistics>& gatherer)
    :_gatherer(gatherer)
    {
        _stoppingPoint = 2;
        _pathsDone = 0;
    }

    Statistics* ConvergenceTable::clone() const
    {
        return new ConvergenceTable(*this);
    }

    void ConvergenceTable::dumpOneResult(double result)
    {
        _gatherer->dumpOneResult(result);
        ++_pathsDone;

        if (_pathsDone == _stoppingPoint)
        {
            _stoppingPoint *= 2;
            std::vector<std::vector<double> > thisResult(_gatherer->getResultsSoFar());


            for (std::size_t i = 0; i < thisResult.size(); ++i)
            {
                thisResult[i].push_back(_pathsDone);
                _resultsSoFar.push_back(thisResult[i]);
            }
        }
    }

    std::vector<std::vector<double> > ConvergenceTable::getResultsSoFar() const
    {
        std::vector<std::vector<double> > tmp(_resultsSoFar);

        if (_pathsDone * 2 != _stoppingPoint)
        {
            std::vector<std::vector<double> >
                thisResult(_gatherer->getResultsSoFar());

            for (std::size_t i = 0; i < thisResult.size(); ++i)
            {
                thisResult[i].push_back(_pathsDone);
                tmp.push_back(thisResult[i]);
            }
        }
        return tmp;
    }

}