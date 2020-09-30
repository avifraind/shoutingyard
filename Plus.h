//
// Created by avi on 30/09/2020.
//

#ifndef SHOUTINGYARD_PLUS_H
#define SHOUTINGYARD_PLUS_H


#include "BinaryOperator.h"

class Plus : public BinaryOperator {
public:
    virtual double calculate();
    virtual ~Plus() {}
};


#endif //SHOUTINGYARD_PLUS_H
