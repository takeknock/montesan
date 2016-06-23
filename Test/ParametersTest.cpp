#include "ParametersTest.h"
#include "../JoshiDPDP/ParametersConstant.h"

CPPUNIT_TEST_SUITE_REGISTRATION(ParametersTest);

void ParametersTest::setUp()
{
}

void ParametersTest::testConstructor()
{
}

void ParametersTest::testOperatorEqual()
{

}

void ParametersTest::testIntegral()
{
    const double expected = 10.0;
    mc::ParametersConstant constantParameter(expected);
    mc::Parameters parameters(constantParameter);
    CPPUNIT_ASSERT_DOUBLES_EQUAL(
        10.0, parameters.Integral(1.0, 2.0), 10e-7);

}

void ParametersTest::testIntegralSquareTest()
{
    const double expected = 10.0;
    mc::ParametersConstant constantParameter(expected);
    mc::Parameters parameters(constantParameter);
    CPPUNIT_ASSERT_DOUBLES_EQUAL(
        100.0, parameters.IntegralSquare(1.0, 2.0), 10e-7);

}

void ParametersTest::testCalculateMean()
{
    const double expected = 10.0;
    mc::ParametersConstant constantParameter(expected);
    mc::Parameters parameters(constantParameter);
    CPPUNIT_ASSERT_DOUBLES_EQUAL(
        10.0, parameters.calculateMean(1.0, 2.0), 10e-7);
}


void ParametersTest::testCalculateRootMeanSquare()
{
    const double expected = 10.0;
    mc::ParametersConstant constantParameter(expected);
    mc::Parameters parameters(constantParameter);
    CPPUNIT_ASSERT_DOUBLES_EQUAL(
        100.0, parameters.calculateRootMeanSquare(1.0, 2.0), 10e-7);

}



void ParametersTest::tearDown()
{

}
