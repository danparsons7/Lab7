#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE MyModuleName
#include <boost/test/unit_test.hpp>

#include "head.h"

BOOST_AUTO_TEST_CASE( addTest )
{
    // Check equality of the results of two expressions
    BOOST_CHECK_EQUAL( (1+2) , 3 );
}

