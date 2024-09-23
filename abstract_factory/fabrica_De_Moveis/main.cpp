#include "include/fabrica_moderna.hpp"

#include <iostream>

int main(){

    FabricaModerna *fabricaModerna  = new FabricaModerna();
    
    MesaDeCentro *mesaCentroModerna = fabricaModerna->criarMesa();
    Cadeira *cadeiraModerna         = fabricaModerna->criarCadeira(); 
    Sofa    *sofaModerno            = fabricaModerna->criarSofa();
    
    mesaCentroModerna->colocarObjetos();
    cadeiraModerna->sentar();
    sofaModerno->deitar();

    return 0;
}