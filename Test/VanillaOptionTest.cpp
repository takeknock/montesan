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

void VanillaOptionTest::tearDown()
{

}
