#pragma once

#include <cppunit/extensions/HelperMacros.h>
#include "../JoshiDPDP/ParametersConstant.h"

class ParametersConstantTest : public CPPUNIT_NS::TestFixture {
    friend class ParametersConstant;
    CPPUNIT_TEST_SUITE(ParametersConstantTest);
    CPPUNIT_TEST(testConstructor);
    CPPUNIT_TEST(testOperatorEqual);
    CPPUNIT_TEST(testIntegral);
    CPPUNIT_TEST(testIntegralSquareTest);
    //CPPUNIT_TEST(test_mul);
    CPPUNIT_TEST_SUITE_END();

public:
    void setUp();
    void tearDown();

private:
    void testConstructor();
    void testOperatorEqual();
    void testClone();
    void testIntegral();
    void testIntegralSquareTest();


};