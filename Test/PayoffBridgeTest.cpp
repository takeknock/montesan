#include "PayoffBridgeTest.h"


CPPUNIT_TEST_SUITE_REGISTRATION(PayoffBridgeTest);

void PayoffBridgeTest::setUp()
{
}

void PayoffBridgeTest::testCopyConstructor()
{
    mc::PayoffCall payoffCall(20.0);
    mc::PayoffBridge payoffBridge(payoffCall);
    mc::PayoffBridge payoffBridgeCopied(payoffBridge);
    CPPUNIT_ASSERT_DOUBLES_EQUAL(payoffBridge(50.0), payoffBridgeCopied(50.0), 10e-7);

}

void PayoffBridgeTest::testConstructorArguePayoff()
{
    mc::PayoffCall payoffCall(20.0);
    mc::PayoffBridge payoffBridge(payoffCall);
    CPPUNIT_ASSERT_DOUBLES_EQUAL(payoffCall(50.0), payoffBridge(50.0), 10e-7);

}

void PayoffBridgeTest::tearDown()
{}
