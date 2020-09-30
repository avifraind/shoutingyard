//
// Created by avi on 30/09/2020.
//

#ifndef SHOUTINGYARD_UMINUS_H
#define SHOUTINGYARD_UMINUS_H


#include "Expression.h"
#include "UnaryOperator.h"

class UMinus : public UnaryOperator {
public:
    virtual double calculate();
    virtual ~UMinus() {}
};


#endif //SHOUTINGYARD_UMINUS_H
