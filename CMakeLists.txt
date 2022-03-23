cmake_minimum_required(VERSION 3.21)
project(simple_factory_programming_idiom)

set(CMAKE_CXX_STANDARD 23)
include_directories(include)
add_executable(simple_factory_programming_idiom main.cpp src/pizza_store.cpp include/simple_pizza_factories.h src/simple_pizza_factories.cpp include/pizza.h src/pizza.cpp)
