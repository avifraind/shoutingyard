//
// Created by avi on 30/09/2020.
//

#include "Mul.h"

double Mul::calculate() {
    return left->calculate() * right->calculate();
}