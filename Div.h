//
// Created by avi on 30/09/2020.
//

#ifndef SHOUTINGYARD_DIV_H
#define SHOUTINGYARD_DIV_H


#include "BinaryOperator.h"

class Div : public BinaryOperator {
public:
    virtual double calculate();
    virtual ~Div() {}
};


#endif //SHOUTINGYARD_DIV_H
