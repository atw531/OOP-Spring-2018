#include "RationalNumber.hpp"
#include <iostream>

bool RationalNumber::operator<(RationalNumber b) {

	if (this->isNegative && !b.isNegative) {
		return true;
	} else if (!this->isNegative && b.isNegative) {
		return false;
	} else if (this->isNegative && b.isNegative) {
		return ((double)this->num / this->den) > ((double)b.num / b.den);
	} else {
		return ((double)this->num / this->den) < ((double)b.num / b.den);
	}

}

bool RationalNumber::operator>(RationalNumber b) {

	if (this->isNegative && !b.isNegative) {
		return false;
	} else if (!this->isNegative && b.isNegative) {
		return true;
	} else if (this->isNegative && b.isNegative) {
		return ((double)this->num / this->den) < ((double)b.num / b.den);
	} else {
		return ((double)this->num / this->den) > ((double)b.num / b.den);
	}

}

bool RationalNumber::operator==(RationalNumber b) {

	return this->isNegative == b.isNegative && this->num == b.num && this->den == b.den;
	//return (this->num / this->den) == (b.num / b.den);

}

bool RationalNumber::operator!=(RationalNumber b) {

	return !(*this == b);

}