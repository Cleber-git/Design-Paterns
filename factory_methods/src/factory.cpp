#include "../includes/factory.hpp"
#include "../includes/logistics.hpp"
#include "../includes/aereo.hpp"
#include "../includes/maritimo.hpp"
#include "../includes/terrestre.hpp"
#include "../includes/subterreo.hpp"

#include <iostream>

using namespace std;

logistics *factory::instance = nullptr;
factory::factory(){}

logistics &factory::getInstance(object TIPO){
    switch (TIPO)
    {
    case object::MARITIMO:
        return maritimo::getInstance();
    case object::AEREO:
        return aereo::getInstance();
    case object::TERRESTRE:
        return terrestre::getInstance();
    case object::SUBTERREO:
        subterreo *sub = new subterreo;
        return  (*sub);
    }
}