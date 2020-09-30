//
// Created by avi on 30/09/2020.
//

#ifndef SHOUTINGYARD_UPLUS_H
#define SHOUTINGYARD_UPLUS_H


#include "UnaryOperator.h"

class UPlus : public UnaryOperator {
public:
    virtual double calculate();
    virtual ~UPlus() {}
};


#endif //SHOUTINGYARD_UPLUS_H
