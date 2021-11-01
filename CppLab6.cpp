#include <iostream>
#include "class.h"
#include "class.cpp"
int main()
{
    Fraction fraction(6, 9);
    fraction.ReduceFraction().GetFraction();
    Fraction copy(fraction);
    Fraction fraction2(4, 5);
    AddingFraction(fraction, fraction2).ReduceFraction().GetFraction();
    MultiplyFraction(fraction, fraction2).ReduceFraction().GetFraction();
    DivisionFraction(fraction, fraction2).ReduceFraction().GetFraction();
    return 0;

}