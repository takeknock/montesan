#pragma once

#include <cppunit/extensions/HelperMacros.h>
#include "../JoshiDPDP/Payoff.h"
#include "../JoshiDPDP/PayoffBridge.h"
#include "../JoshiDPDP/PayoffCall.h"

class PayoffBridgeTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(PayoffBridgeTest);
    CPPUNIT_TEST(testCopyConstructor);
    CPPUNIT_TEST(testConstructorArguePayoff);
    //CPPUNIT_TEST(testPayoffDoubleDigital);
    //CPPUNIT_TEST(testPayoffCallClone);
    //CPPUNIT_TEST(testPayoffPutClone);
    //CPPUNIT_TEST(testPayoffDoubleDigitalClone);
    //CPPUNIT_TEST(test_mul);
    CPPUNIT_TEST_SUITE_END();

public:
    void setUp();
    void tearDown();

private:
    void testCopyConstructor();
    void testConstructorArguePayoff();
};