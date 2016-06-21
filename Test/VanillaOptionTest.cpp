#include "VanillaOptionTest.h"
#include "../JoshiDPDP/PayoffCall.h"

CPPUNIT_TEST_SUITE_REGISTRATION(VanillaOptionTest);

void VanillaOptionTest::setUp()
{

}


void VanillaOptionTest::testGetMaturity()
{
    mc::PayoffCall payoffCall(10.0);
    mc::VanillaOption option(payoffCall, 1.0);
    CPPUNIT_ASSERT_DOUBLES_EQUAL(1.0, option.getMaturity(), 10e-7);
}

void VanillaOptionTest::testGetPayoff()
{
    mc::PayoffCall payoffCall(10.0);
    mc::VanillaOption option(payoffCall, 1.0);
    CPPUNIT_ASSERT_DOUBLES_EQUAL(70.0, option.getPayoff(80.0), 10e-7);

}

void VanillaOptionTest::testOperatorEqual()
{
    mc::PayoffCall payoffCall(10.0);
    mc::PayoffCall payoffCall2(20.0);
    mc::VanillaOption option(payoffCall, 1.0);
    mc::VanillaOption option2(payoffCall2, 2.0);
    option2 = option;
    CPPUNIT_ASSERT_DOUBLES_EQUAL(option.getMaturity(), option2.getMaturity(), 10e-7);
    CPPUNIT_ASSERT_DOUBLES_EQUAL(option.getPayoff(30.0), option2.getPayoff(30.0), 10e-7);

}

void VanillaOptionTest::tearDown()
{

}
