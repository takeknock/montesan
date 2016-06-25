#include <iostream>

#include "../JoshiDPDP/functions.h"
#include "../JoshiDPDP/PayoffCall.h"
#include "../JoshiDPDP/PayoffPut.h"
#include "../JoshiDPDP/PayoffDoubleDigital.h"
//#include "../JoshiDPDP/Payoff.h"


#include <cppunit/BriefTestProgressListener.h>
#include <cppunit/CompilerOutputter.h>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/TestResult.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/TestRunner.h>

#include "functionsTest.h"

#include "../JoshiDPDP/ParametersConstant.h"


int main()
{
    const double maturity = 1.0;
    const double strike = 100.0;
    const double spot = 100.0;
    const double volatility = 0.2;
    const double interestRate = 0.01;
    const size_t numberOfPath = 10;
    const mc::PayoffCall callPayoff(strike);
    const mc::PayoffPut putPayoff(strike);
    const mc::VanillaOption callOption(callPayoff, maturity);
    const mc::VanillaOption putOption(putPayoff, maturity);
    const mc::ParametersConstant volatilityParameter(volatility);
    const mc::ParametersConstant interestRateParameter(volatility);
    const double callPrice = mc::simpleMonteCarlo(
        callOption, spot, volatilityParameter, interestRateParameter, numberOfPath);
    const double putPrice = mc::simpleMonteCarlo(
        putOption, spot, volatilityParameter, interestRateParameter, numberOfPath);

    const mc::PayoffDoubleDigital doubleDigitalPayoff(-1.0, 1.0);
    const mc::VanillaOption doubleDigitalOption(doubleDigitalPayoff, maturity);
    const double doubleDigitalOptionPrice = mc::simpleMonteCarlo(
        doubleDigitalOption, spot, volatilityParameter, interestRateParameter, numberOfPath);

    std::cout << "the price of call option: " << callPrice << std::endl;
    std::cout << "the price of put option: " << putPrice << std::endl;
    std::cout << "the price of double digital option: " << doubleDigitalOptionPrice << std::endl;

    // �C�x���g�E�}�l�[�W���ƃe�X�g�E�R���g���[���𐶐�����
    CPPUNIT_NS::TestResult controller;

    // �e�X�g���ʎ��W���X�i���R���g���[���ɃA�^�b�`����
    CPPUNIT_NS::TestResultCollector result;
    controller.addListener(&result);

    // �u.�v�Ői�s�󋵂��o�͂��郊�X�i���A�^�b�`����
    CPPUNIT_NS::BriefTestProgressListener progress;
    controller.addListener(&progress);

    // �e�X�g�E�����i�[�Ƀe�X�g�Q��^���A�e�X�g����
    CPPUNIT_NS::TestRunner runner;
    runner.addTest(CPPUNIT_NS::TestFactoryRegistry::getRegistry().makeTest());
    runner.run(controller);

    // �e�X�g���ʂ�W���o�͂ɓf���o��
    CPPUNIT_NS::CompilerOutputter outputter(&result, CPPUNIT_NS::stdCOut());
    outputter.write();

    double a;
    std::cin >> a;
    return 0;

    
}