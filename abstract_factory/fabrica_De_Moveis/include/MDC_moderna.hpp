#pragma once

#include "../include/mesa_de_centro.hpp"


class MDCModerna: public MesaDeCentro
{
private:
    /* data */
public:
    MDCModerna(/* args */);
    ~MDCModerna();
    void colocarObjetos()override;
};
