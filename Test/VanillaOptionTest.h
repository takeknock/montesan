#pragma once


#include <cppunit/extensions/HelperMacros.h>

#include "../JoshiDPDP/VanillaOption.h"


class VanillaOptionTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(VanillaOptionTest);
    CPPUNIT_TEST(testGetMaturity);
    CPPUNIT_TEST(testGetPayoff);
    CPPUNIT_TEST(testOperatorEqual);
    //CPPUNIT_TEST(test_mul);
    CPPUNIT_TEST_SUITE_END();

public:
    void setUp();
    void tearDown();

private:
    void testGetMaturity();
    void testGetPayoff();
    void testOperatorEqual();


};
