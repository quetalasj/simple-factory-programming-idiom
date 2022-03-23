#include "pizza_store.h"


PizzaStore::PizzaStore(std::shared_ptr<SimplePizzaFactory> factory) : factory(factory) {}

std::shared_ptr<Pizza> PizzaStore::orderPizza(std::string type) {
    std::shared_ptr<Pizza> pizza;

    pizza = factory->createPizza(type);
    pizza->prepare();
    pizza->bake();
    pizza->cut();
    pizza->box();
    return pizza;
}