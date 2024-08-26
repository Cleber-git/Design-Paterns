#include "../includes/factory.hpp"
#include "../includes/logistics.hpp"
#include "../includes/aereo.hpp"
#include "../includes/maritimo.hpp"
#include "../includes/terrestre.hpp"
#include "../includes/subterreo.hpp"
#include "../includes/teletransporte.hpp"

#include <iostream>

using namespace std;

Logistics *Factory::instance = nullptr;
Factory::Factory(){}

Logistics &Factory::getInstance(object TIPO){
    switch (TIPO)
    {
    case object::MARITIMO:
        return Maritimo::getInstance();
        break;
    case object::AEREO:
        return Aereo::getInstance();
        break;
    case object::TERRESTRE:
        return Terrestre::getInstance();
        break;
    case object::SUBTERREO:
        Subterreo *sub = new Subterreo();
        return (*sub);
        break;
    case object::TELETRANSPORTE:
        TeleTransporte* teleTransporte = new TeleTransporte;
        return (*teleTransporte);
        break;
    }
}