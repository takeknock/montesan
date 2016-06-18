
#include "PayoffTest.h"
#include "../JoshiDPDP/Payoff.h"
#include "../JoshiDPDP/PayoffCall.h"



CPPUNIT_TEST_SUITE_REGISTRATION(PayoffTest);

void PayoffTest::setUp()
{

}

void PayoffTest::testPayoffCall()
{
    mc::PayoffCall payoffCall(30.0);
    CPPUNIT_ASSERT_DOUBLES_EQUAL(70.0, payoffCall(100.0), 10e-6);
    CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, payoffCall(20.0), 10e-7);

}

void PayoffTest::tearDown()
{

}