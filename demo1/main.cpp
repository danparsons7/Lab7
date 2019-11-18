#include <iostream>
#include "head.h"

using namespace std;

float lowerTax = 0.2;

int calculateTax(int income)
{

    return income * lowerTax;
}
