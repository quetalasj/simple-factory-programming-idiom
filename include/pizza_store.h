#pragma once
#include "memory"
#include "string"
#include "simple_pizza_factories.h"
#include "pizza.h"


class PizzaStore {
public:
    std::shared_ptr<SimplePizzaFactory> factory;
    PizzaStore(std::shared_ptr<SimplePizzaFactory> factory);
    std::shared_ptr<Pizza> orderPizza(std::string type);
};
