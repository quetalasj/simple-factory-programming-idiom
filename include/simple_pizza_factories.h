#pragma once
#include "string"
#include "pizza.h"
#include "memory"


class SimplePizzaFactory{
public:
    std::shared_ptr<Pizza> createPizza(std::string type);
};