#pragma once
#include <cppunit/extensions/HelperMacros.h>

class PayoffTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(PayoffTest);
    CPPUNIT_TEST(testPayoffCall);
    CPPUNIT_TEST(testPayoffPut);
    CPPUNIT_TEST(testPayoffDoubleDigital);
    CPPUNIT_TEST(testPayoffCallClone);
    CPPUNIT_TEST(testPayoffPutClone);
    CPPUNIT_TEST(testPayoffDoubleDigitalClone);
    //CPPUNIT_TEST(test_mul);
    CPPUNIT_TEST_SUITE_END();

public:
    void setUp();
    void tearDown();

private:
    void testPayoffCall();
    void testPayoffPut();
    void testPayoffDoubleDigital();
    void testPayoffCallClone();
    void testPayoffPutClone();
    void testPayoffDoubleDigitalClone();
};