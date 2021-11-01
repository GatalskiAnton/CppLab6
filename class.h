#pragma once
class Fraction {
private:
    int numerator;
    int denominator;
public:
    Fraction(int numerator, int denominator);
    int GetNumerator();
    int GetDenominator();
    Fraction(const Fraction& fraction);
    Fraction ReduceFraction();
    void GetFraction();
};
