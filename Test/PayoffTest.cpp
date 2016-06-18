
#include "PayoffTest.h"
#include "../JoshiDPDP/Payoff.h"
#include "../JoshiDPDP/PayoffCall.h"
#include "../JoshiDPDP/PayoffPut.h"
#include "../JoshiDPDP/PayoffDoubleDigital.h"


CPPUNIT_TEST_SUITE_REGISTRATION(PayoffTest);

void PayoffTest::setUp()
{

}

void PayoffTest::testPayoffCall()
{
    mc::PayoffCall payoffCall(30.0);
    CPPUNIT_ASSERT_DOUBLES_EQUAL(70.0, payoffCall(100.0), 10e-7);
    CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, payoffCall(20.0), 10e-7);
}

void PayoffTest::testPayoffPut()
{
    mc::PayoffPut payoffPut(30.0);
    CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, payoffPut(100.0), 10e-7);
    CPPUNIT_ASSERT_DOUBLES_EQUAL(10.0, payoffPut(20.0), 10e-7);
}

void PayoffTest::testPayoffDoubleDigital()
{
    mc::PayoffDoubleDigital payoffDoubleDigital(10.0, 20.0);
    CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, payoffDoubleDigital(100.0), 10e-7);
    CPPUNIT_ASSERT_DOUBLES_EQUAL(1.0, payoffDoubleDigital(15.0), 10e-7);

}


void PayoffTest::tearDown()
{

}