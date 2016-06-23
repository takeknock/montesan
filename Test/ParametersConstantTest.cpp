#include "ParametersConstantTest.h"

CPPUNIT_TEST_SUITE_REGISTRATION(ParametersConstantTest);

void ParametersConstantTest::setUp()
{

}

void ParametersConstantTest::testConstructor()
{
    const double expected = 10.0;
    mc::ParametersConstant constantParameter(expected);
    CPPUNIT_ASSERT_DOUBLES_EQUAL(10.0, constantParameter.Integral(1.0, 2.0), 10e-7);
}

void ParametersConstantTest::testOperatorEqual()
{
    const double expected = 10.0;
    mc::ParametersConstant constantParameter(expected);
    mc::ParametersConstant constantParameterCopied(100.0);
    constantParameterCopied = constantParameter;
    CPPUNIT_ASSERT_DOUBLES_EQUAL(
        10.0, constantParameterCopied.Integral(1.0, 2.0), 10e-7);

}

void ParametersConstantTest::testClone()
{
    const double expected = 10.0;
    mc::ParametersConstant constantParameter(expected);
    mc::ParametersInner* innerPtr = constantParameter.clone();
    CPPUNIT_ASSERT_DOUBLES_EQUAL(
        10.0, innerPtr->Integral(1.0, 2.0), 10e-7);

}


void ParametersConstantTest::testIntegral()
{
    const double expected = 10.0;
    mc::ParametersConstant constantParameter(expected);
    CPPUNIT_ASSERT_DOUBLES_EQUAL(10.0, constantParameter.Integral(1.0, 2.0), 10e-7);

}

void ParametersConstantTest::testIntegralSquareTest()
{
    const double expected = 10.0;
    mc::ParametersConstant constantParameter(expected);
    CPPUNIT_ASSERT_DOUBLES_EQUAL(100.0, constantParameter.IntegralSquare(1.0, 2.0), 10e-7);

}

void ParametersConstantTest::tearDown()
{

}