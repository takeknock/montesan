#pragma once


#include <cppunit/extensions/HelperMacros.h>

#include "../JoshiDPDP/StatisticsMean.h"


class StatisticsMeanTest : public CPPUNIT_NS::TestFixture {
    
    CPPUNIT_TEST_SUITE(StatisticsMeanTest);
    CPPUNIT_TEST(testConstructor);
    CPPUNIT_TEST(dumpOneResultTest);
    CPPUNIT_TEST(getResultSoFarTest);
    CPPUNIT_TEST(cloneTest);
    CPPUNIT_TEST_SUITE_END();

public:
    void setUp();
    void tearDown();

private:

    void testConstructor();
    void dumpOneResultTest();
    void getResultSoFarTest();
    void cloneTest();



};
