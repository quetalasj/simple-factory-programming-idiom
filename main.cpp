#include <iostream>
#include "memory"
#include "pizza_store.h"
#include "simple_pizza_factories.h"

using namespace std;


int main() {
    shared_ptr<SimplePizzaFactory> factory = make_shared<SimplePizzaFactory>(SimplePizzaFactory());
    PizzaStore nyStore(factory);
    nyStore.orderPizza("cheese");

//    shared_ptr<SimplePizzaFactory> chicagoFactor = make_shared<ChicagoPizzaFactory>(ChicagoPizzaFactory());
//    PizzaStore chicagoStore(chicagoFactory);
//    chicagoStore.orderPizza("Veggie");
    return 0;
}
