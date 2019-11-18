#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE MyModuleName
#include <boost/test/unit_test.hpp>

#include "head.h"

BOOST_AUTO_TEST_CASE( taxCalc )
{
    // Check equality of the results of two expressions
    BOOST_CHECK_EQUAL( calculateTax(50000) , 12500 );

}

BOOST_AUTO_TEST_CASE( taxCalc2 )
{
    // Check equality of the results of two expressions
    BOOST_CHECK_EQUAL( calculateTax(10000) , 2000 );

}

BOOST_AUTO_TEST_CASE( taxCalc3 )
{
    // Check equality of the results of two expressions
    BOOST_CHECK_EQUAL( calculateTax(200000) , 75000 );

}
