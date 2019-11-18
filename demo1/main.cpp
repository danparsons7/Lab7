#include <iostream>
#include "head.h"

using namespace std;

float lowerTax = 0.2;
float upperTax = 0.4;

int calculateTax(int income)
{

    int first = 0;
    int second = 0;

    if (income > 37500)
    {
        first = 37500 * lowerTax;

        second = (income - 37500) * upperTax;
    }

    else
    {
        first = income * lowerTax;
    }

    return (first + second);
}
