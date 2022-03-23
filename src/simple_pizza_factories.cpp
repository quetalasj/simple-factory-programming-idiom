#include "simple_pizza_factories.h"


std::shared_ptr<Pizza> SimplePizzaFactory::createPizza(std::string type) {
    std::shared_ptr<Pizza> pizza;
    if (type == "cheese") {
        pizza = std::make_shared<CheesePizza>(CheesePizza());
    } else if (type == "pepperoni") {
//        pizza = PepperoniPizza();
        throw "Not implemented";
    } else if (type == "clam") {
//        pizza = ClamPizza();
        throw "Not implemented";
    } else if (type == "veggie") {
//        pizza = VeggiePizza();
        throw "Not implemented";
    }

    return pizza;
}