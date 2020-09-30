//
// Created by avi on 30/09/2020.
//

#ifndef SHOUTINGYARD_MUL_H
#define SHOUTINGYARD_MUL_H


#include "BinaryOperator.h"

class Mul : public BinaryOperator {
public:
    virtual double calculate();
    virtual ~Mul() {}
};


#endif //SHOUTINGYARD_MUL_H
