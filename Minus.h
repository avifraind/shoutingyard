//
// Created by avi on 30/09/2020.
//

#ifndef SHOUTINGYARD_MINUS_H
#define SHOUTINGYARD_MINUS_H


#include "BinaryOperator.h"

class Minus : public BinaryOperator {
public:
    virtual double calculate();
    virtual ~Minus() {}
};


#endif //SHOUTINGYARD_MINUS_H
