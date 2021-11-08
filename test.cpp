#include "gtest/gtest.h"
#include "class.h"


TEST(testGetNumerator, test1){
    Fraction testFraction(2,4);
    ASSERT_EQ(testFraction.GetNumerator(),2);
}
TEST(testGetDenominator, test2){
    Fraction testFraction(2,4);
    ASSERT_EQ(testFraction.GetDenominator(),4);
}
//TEST(testFraction,test3){
//    Fraction testFraction(4,6);
//    Fraction ResultFraction(2,3);
//    ASSERT_EQ(testFraction.ReduceFraction(),ResultFraction);
//}

