#include <boost/random.hpp>
#include <boost/accumulators/accumulators.hpp>
#include <boost/accumulators/statistics/mean.hpp>
#include <boost/accumulators/statistics/stats.hpp>
#include <boost/accumulators/statistics/moment.hpp>
#include <cmath>
#include "functions.h"


namespace mc {

    const FUNCTIONSDLL_API double simpleMonteCarlo(
        const VanillaOption& vanillaOption, 
        const double spot, const Parameters& volatility,
        const Parameters& interestRate, const size_t numberOfPath)
    {
        const double maturity = vanillaOption.getMaturity();


        const int seed = 100;
        boost::random::mt19937 gen(seed);
        boost::random::uniform_01<> dist;
        boost::random::variate_generator<boost::random::mt19937&, boost::random::uniform_01<> > rand(gen, dist);



        const size_t numberOfSteps = 100;

        const double dt = maturity / numberOfSteps;

        boost::accumulators::accumulator_set<double, boost::accumulators::stats<boost::accumulators::tag::mean> > accumulator;
        
        const double variance = volatility.IntegralSquare(0.0, maturity);
        const double rootVariance = std::sqrt(variance);
        const double itoCorrection = -0.5 * variance;

        const double movedSpot = spot * std::exp(interestRate.Integral(0.0, maturity) + itoCorrection);
        double thisSpot = 0.0;


        // create paths
        for (size_t i = 0; i < numberOfPath; ++i)
        {
            // by one step
            const double randomness = rand();
            thisSpot = movedSpot * std::exp(rootVariance * randomness);
            double thisPayoff = vanillaOption.getPayoff(thisSpot);

            //double nextSpot = spot;
            //for (size_t step = 0; step < numberOfSteps; ++step)
            //{
            //    nextSpot += nextSpot * (interestRate * dt - 0.5 * volatility * volatility * std::sqrt(dt) * dist(generator));

            //}
            accumulator(thisPayoff);
        }

        // assume interestRate is fixed.
        const double discountFactor = std::exp(-interestRate.Integral(0.0, maturity));
        const double price = boost::accumulators::mean(accumulator) * discountFactor;

        return price;
    }
}//namespace mcf {
