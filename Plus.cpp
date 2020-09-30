//
// Created by avi on 30/09/2020.
//

#include "Plus.h"


double Plus::calculate() {
    return left->calculate() + right->calculate();
}