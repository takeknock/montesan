#pragma once

#ifdef DPDPLIBRARY_EXPORTS
#define PAYOFFDLL_API __declspec(dllexport) 
#else
#define PAYOFFDLL_API __declspec(dllimport) 
#endif

namespace mc {
    class Payoff {
    public:
        //const PAYOFFDLL_API enum OptionType{call, put};
        //PAYOFFDLL_API Payoff(const double strike, const OptionType theOptionType);
        PAYOFFDLL_API Payoff() {};
        virtual const PAYOFFDLL_API double operator()(const double spot) const = 0;
        virtual ~Payoff() {};

    private:
    };

} // namespace mc