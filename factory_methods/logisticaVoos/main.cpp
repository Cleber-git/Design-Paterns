#include "includes/factory.hpp"
#include <iostream>

using namespace std;
int main(){
    Logistics &instanceAereo          = Factory::getInstance(Factory::object::AEREO);
    Logistics &instanceMaritmo        = Factory::getInstance(Factory::object::MARITIMO);
    Logistics &instanceTerrestre      = Factory::getInstance(Factory::object::TERRESTRE);
    Logistics &instanceSubterreo      = Factory::getInstance(Factory::object::SUBTERREO);

    Logistics &instanceAereo2         = Factory::getInstance(Factory::object::AEREO);
    Logistics &instanceMaritmo2       = Factory::getInstance(Factory::object::MARITIMO);
    Logistics &instanceTerrestre2     = Factory::getInstance(Factory::object::TERRESTRE);
    Logistics &instanceTeleTransporte = Factory::getInstance(Factory::object
    ::TELETRANSPORTE);

}