//
// Created by avi on 30/09/2020.
//

#ifndef SHOUTINGYARD_EXPRESSION_H
#define SHOUTINGYARD_EXPRESSION_H


using namespace std;
/**
 * Expression Interface
 */
class Expression {

public:

    virtual double calculate() = 0;
    virtual ~Expression() {}
};


#endif //SHOUTINGYARD_EXPRESSION_H
