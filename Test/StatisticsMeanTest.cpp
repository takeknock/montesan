


#include "StatisticsMeanTest.h"


CPPUNIT_TEST_SUITE_REGISTRATION(StatisticsMeanTest);

void StatisticsMeanTest::setUp()
{

}

void StatisticsMeanTest::testConstructor()
{
    //mc::StatisticsMean mean;
    //å^èÓïÒÇÃÇøÇ•Ç¡Ç≠
    //CPPUNIT_ASSERT_EQUAL(typeid(mc::StatisticsMean), typeof(mean));
    
}

void StatisticsMeanTest::dumpOneResultTest()
{
    mc::StatisticsMean mean;
    const double result = 1.0;
    mean.dumpOneResult(result);
    //CPPUNIT_ASSERT_DOUBLES_EQUAL()

}

void StatisticsMeanTest::getResultSoFarTest()
{

}

void StatisticsMeanTest::cloneTest()
{

}


void StatisticsMeanTest::tearDown()
{

}

