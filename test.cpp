#include "gtest/gtest.h"
#include "class.h"

bool operator == ( Fraction fraction1,  Fraction fraction2)
{
    if (fraction1.GetNumerator() == fraction2.GetNumerator() && fraction2.GetDenominator() == fraction1.GetDenominator()){
        return true;
    }
    return false;
}
TEST(testGetNumerator, test1){
    Fraction testFraction(2,4);
    ASSERT_EQ(testFraction.GetNumerator(),2);
}
TEST(testGetDenominator, test2){
    Fraction testFraction(2,4);
    ASSERT_EQ(testFraction.GetDenominator(),4);
}
TEST(testReduceFraction,test3){
   Fraction testFraction(4,6);
   Fraction ResultFraction(2,3);
   ASSERT_EQ(testFraction.ReduceFraction(),ResultFraction);
}
//TEST(testAddingFraction,test4){
//    Fraction testFraction1(4,6);
//    Fraction testFraction2(3,5);
//    Fraction ResultFraction(19,15);
//    ASSERT_EQ(AddingFraction(testFraction1,testFraction2),ResultFraction);
//}

