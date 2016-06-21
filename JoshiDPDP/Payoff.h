#pragma once

#ifdef DPDPLIBRARY_EXPORTS
#define DLL_API __declspec(dllexport) 
#else
#define DLL_API __declspec(dllimport) 
#endif

namespace mc {
    class Payoff {
    public:
        //const PAYOFFDLL_API enum OptionType{call, put};
        //PAYOFFDLL_API Payoff(const double strike, const OptionType theOptionType);
        DLL_API Payoff() {};
        virtual const DLL_API double operator()(const double spot) const = 0;
        virtual DLL_API Payoff* clone() const = 0;
        virtual ~Payoff() {};

    private:
    };

} // namespace mc