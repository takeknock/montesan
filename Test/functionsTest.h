#pragma once


#include <cppunit/extensions/HelperMacros.h>

#include "../JoshiDPDP/functions.h"


class FunctionsTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(FunctionsTest);
    CPPUNIT_TEST(testtest);
    //CPPUNIT_TEST(test_diff);
    //CPPUNIT_TEST(test_mul);
    CPPUNIT_TEST_SUITE_END();

public:
    void setUp();
    void tearDown();

private:
    void testtest();


};
