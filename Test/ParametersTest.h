#pragma once

#include <cppunit/extensions/HelperMacros.h>
#include "../JoshiDPDP/Parameters.h"


class ParametersTest : public CPPUNIT_NS::TestFixture {
    friend class Parameters;
    CPPUNIT_TEST_SUITE(ParametersTest);
    CPPUNIT_TEST(testConstructor);
    CPPUNIT_TEST(testOperatorEqual);
    CPPUNIT_TEST(testIntegral);
    CPPUNIT_TEST(testIntegralSquareTest);
    CPPUNIT_TEST(testCalculateMean);
    CPPUNIT_TEST(testCalculateRootMeanSquare);
    //CPPUNIT_TEST(test_mul);
    CPPUNIT_TEST_SUITE_END();

public:
    void setUp();
    void tearDown();

private:
    void testConstructor();
    void testOperatorEqual();
    void testIntegral();
    void testIntegralSquareTest();

    void testCalculateMean();
    void testCalculateRootMeanSquare();

};