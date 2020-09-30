//
// Created by avi on 30/09/2020.
//

#ifndef SHOUTINGYARD_BINARYOPERATOR_H
#define SHOUTINGYARD_BINARYOPERATOR_H


#include "Expression.h"

class BinaryOperator : public Expression {
protected:
    Expression* left;
    Expression* right;

public:
    BinaryOperator(Expression* first, Expression* sec);
    virtual double calculate() = 0;
    virtual ~BinaryOperator() {}
};


#endif //SHOUTINGYARD_BINARYOPERATOR_H
