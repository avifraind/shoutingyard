//
// Created by avi on 30/09/2020.
//

#ifndef SHOUTINGYARD_UNARYOPERATOR_H
#define SHOUTINGYARD_UNARYOPERATOR_H


#include "Expression.h"

class UnaryOperator : public Expression {
protected:
    Expression* expression;
public:
    virtual double calculate() = 0;
    virtual ~UnaryOperator() {}
};


#endif //SHOUTINGYARD_UNARYOPERATOR_H
