#pragma once
#include "../include/fabrica_de_moveis.hpp"

class FabricaModerna : FabricaDeMoveis
{

public:
    FabricaModerna();

    Cadeira      *criarCadeira() override;
    Sofa         *criarSofa()    override;
    MesaDeCentro *criarMesa()    override;
};