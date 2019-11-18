#include <iostream>
#include "head.h"

using namespace std;

float lowerTax = 0.2;
float upperTax = 0.4;
float additionalTax = 0.45;

int firstBracket = 37500;
int secondBracket = 150000;
int personalAllowance = 12500;

int calculateTax(int income)
{
    int total = 0;

    if (income > firstBracket && income < secondBracket)
    {
        total += firstBracket * lowerTax;

        total += (income - firstBracket) * upperTax;
    }

    else if (income > secondBracket)
    {
        total += firstBracket * lowerTax;

        total += (secondBracket - firstBracket) * upperTax;

        total += (income - secondBracket) * additionalTax;
    }

    else
    {
        total += income * lowerTax;
    }

    return total;
}

int calculateTaxFromAnnualIncome(int annualIncome)
{
    int total = 0;

    if (annualIncome > personalAllowance)
    {
        total += (annualIncome - personalAllowance) * lowerTax;
    }

    return total;
}
