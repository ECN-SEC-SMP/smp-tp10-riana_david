#ifndef _Calculator_H_
#define _Calculator_H_

#include <iostream>
#include <math.h>
#include "Calculator.h"


int Calculator::factorielle(int a) {
	if (a == 0)
		return 1;

	int acc = 1;
	for (int i = 1; i <= a; i++) {
		acc *= i;
	}
	return acc;
}

int Calculator::add(int a, int b) {
	return a + b;
}

int Calculator::sub(int a, int b) {
	return a - b;
}

double Calculator::div(double a, double b) {
	return a / b;
}


#endif
