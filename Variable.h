//
// Created by avi on 30/09/2020.
//

#ifndef SHOUTINGYARD_VARIABLE_H
#define SHOUTINGYARD_VARIABLE_H

#include <string>
#include "Expression.h"

class Variable : public Expression {
private:
    string name;
    double value;

public:
    Variable(string c_name, double c_value) : name(c_name), value(value) {}
    Variable& operator++();
    Variable operator++(int);
    Variable& operator--();
    Variable operator--(int);
    Variable& operator+=(double val);
    Variable& operator-=(double val);
    virtual double calculate();
    virtual ~Variable() {}
};


#endif //SHOUTINGYARD_VARIABLE_H
