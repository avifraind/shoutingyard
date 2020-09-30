cmake_minimum_required(VERSION 3.15)
project(shoutingyard)

set(CMAKE_CXX_STANDARD 14)

add_executable(shoutingyard main.cpp Expression.cpp Expression.h Value.cpp Value.h BinaryOperator.cpp BinaryOperator.h Variable.cpp Variable.h UnaryOperator.cpp UnaryOperator.h UPlus.cpp UPlus.h UMinus.cpp UMinus.h Plus.cpp Plus.h Minus.cpp Minus.h Mul.cpp Mul.h Div.cpp Div.h)