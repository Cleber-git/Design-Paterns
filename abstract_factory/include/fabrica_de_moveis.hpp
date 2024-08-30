#pragma once

#include "../include/cadeira.hpp"
#include "../include/mesa_de_centro.hpp"
#include "../include/sofa.hpp" 

#include <iostream>


class FabricaDeMoveis
{
public:
virtual  Cadeira*      criarCadeira();
virtual  MesaDeCentro* criarMesa();
virtual  Sofa*         criarSofa();
};

