//
// Created by avi on 30/09/2020.
//

#ifndef SHOUTINGYARD_VALUE_H
#define SHOUTINGYARD_VALUE_H


#include "Expression.h"

class Value : public Expression {
private:
    double value;
public:
    Value(double val) : value(val){}
    virtual double calculate();
    virtual ~Value() {}
};


#endif //SHOUTINGYARD_VALUE_H
