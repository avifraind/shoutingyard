//
// Created by avi on 30/09/2020.
//

#include "Minus.h"
double Minus::calculate() {
    return left->calculate() - right->calculate();
}