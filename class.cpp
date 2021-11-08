#pragma once 
#include <cassert>
#include <iostream>
#include "class.h"

using namespace std;
int NOD(int a, int b)
{
	while (a > 0 && b > 0) {

		if (a > b) {
			a %= b;
		}
		else {
			b %= a;
		}
	}
	return a + b;
}
Fraction::Fraction(int numerator_ , int denominator_ ) {
	this->numerator = numerator_;
	this->denominator = denominator_;
	assert(denominator != 0);
}
int Fraction::GetNumerator() {
	return numerator;
}
int Fraction::GetDenominator() {
	return denominator;
}

Fraction::Fraction(const Fraction& fraction):numerator(fraction.numerator), denominator(fraction.denominator)
{
	
}

Fraction Fraction::ReduceFraction()
{
	int gcd = NOD(this->numerator, this->denominator);
	this->numerator /= gcd;
	this->denominator /= gcd;
	Fraction ResultFraction(numerator, denominator);
	return ResultFraction;
}

void Fraction::GetFraction()
{
	std::cout << this->GetNumerator() << "/" << this->GetDenominator() << "\n";
}

Fraction AddingFraction(Fraction fraction_1, Fraction fraction_2) {
	if (fraction_1.GetDenominator() == fraction_2.GetDenominator())
	{
		int NewDenominator = fraction_1.GetNumerator() + fraction_2.GetNumerator();
	    Fraction ResultFraction(NewDenominator, fraction_1.GetDenominator());
		return ResultFraction;
	}
	else 
	{
		Fraction ResultFraction((int)(fraction_2.GetDenominator() * fraction_1.GetNumerator() + fraction_1.GetDenominator() * fraction_2.GetNumerator()), (int)(fraction_2.GetDenominator() * fraction_1.GetDenominator()));
		return ResultFraction;
	}
}
Fraction MultiplyFraction(Fraction fraction_1, Fraction fraction_2) {
	Fraction ResultFraction((int)(fraction_1.GetNumerator() * fraction_2.GetNumerator()), (int)(fraction_1.GetDenominator() * fraction_2.GetDenominator()));
	return ResultFraction;
}
Fraction DivisionFraction(Fraction fraction_1, Fraction fraction_2) {
	Fraction ResultFraction((int)(fraction_1.GetNumerator() * fraction_2.GetDenominator()),(int)(fraction_1.GetDenominator() * fraction_2.GetNumerator()));
	return ResultFraction;
}