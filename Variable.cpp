//
// Created by avi on 30/09/2020.
//

#include "Variable.h"

Variable& Variable::operator++() {
    value++;
    return *this;
}

Variable Variable::operator++(int) {
    return Variable(name, value + 1);
}

Variable& Variable::operator--() {
    value--;
    return *this;
}

Variable Variable::operator--(int) {
    return Variable(name, value - 1);
}

Variable& Variable::operator+=(double val) {
    this->value = this->value + val;
    return *this;
}

Variable& Variable::operator-=(double val) {
    this->value = this->value - val;
    return *this;
}