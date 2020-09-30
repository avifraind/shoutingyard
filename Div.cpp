//
// Created by avi on 30/09/2020.
//

#include "Div.h"

double Div::calculate() {
    return left->calculate() / right->calculate();
}
