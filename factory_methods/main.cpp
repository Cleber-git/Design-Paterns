#include "includes/factory.hpp"

#include <iostream>

using namespace std;
int main(){
    logistics &instanceAereo     = factory::getInstance(factory::object::AEREO);
    logistics &instanceMaritmo   = factory::getInstance(factory::object::MARITIMO);
    logistics &instanceTerrestre = factory::getInstance(factory::object::TERRESTRE);
    logistics &instanceSubterreo = factory::getInstance(factory::object::SUBTERREO);

    logistics &instanceAereo2     = factory::getInstance(factory::object::AEREO);
    logistics &instanceMaritmo2   = factory::getInstance(factory::object::MARITIMO);
    logistics &instanceTerrestre2 = factory::getInstance(factory::object::TERRESTRE);
    logistics &instanceSubterreo2 = factory::getInstance(factory::object::SUBTERREO);
}